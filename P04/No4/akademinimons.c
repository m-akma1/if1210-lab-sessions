#include "akademinimons.h"

void parseStudentData(char *line, Nimon *nimon) {
    char *token = strtok(line, "|");
    strcpy(nimon->nim, token);
    
    token = strtok(NULL, "|");
    strcpy(nimon->name, token);

    int count = 0;
    while ((token = strtok(NULL, ",")) != NULL) {
        int score = atoi(token);
        nimon->scores[count++] = score;
    }
    nimon->scoreCount = count;
}

void calculateStatistics(Nimon *nimon) {
    int total = 0, max = 0, min = 0x7fffffff;
    for(int i = 0; i < nimon->scoreCount; i++) {
        int score = nimon->scores[i];
        total += score;
        if (score > max) max = score;
        if (score < min) min = score;
        nimon->scores[i] = score;
    }

    nimon->highest = max;
    nimon->lowest = min;
    nimon->average = ((float) total) / nimon->scoreCount;

    if (nimon->average < PASS_THRESHOLD) strcpy(nimon->status, "FAIL");
    else strcpy(nimon->status, "PASS");
}

void writeStudentResult(Nimon *nimon) {
    printf("%s|%s|%.2f|%d|%d|%s\n", nimon->nim, nimon->name, nimon->average, nimon->highest, nimon->lowest, nimon->status);
}

void writeSummary(Nimon *nimons, int nimonCount) {
    if (nimonCount == 0) {
        printf("0\n0 0.00%%\n0 0.00%%\n\n");
        return;
    }
    int pass = 0, fail = 0;
    float max = 0.0F;
    Nimon *best;
    for (int i = 0; i < nimonCount; i++) {
        if (strcmp(((nimons + i)->status), "PASS") == 0) pass++;
        else fail++;

        if ((nimons + i)->average > max) {
            max = (nimons + i)->average;
            best = nimons + i;
        }
    }

    printf("%d\n", nimonCount);
    printf("%d %.2f%%\n", pass, (pass * 100.0F / nimonCount));
    printf("%d %.2f%%\n", fail, (fail * 100.0F / nimonCount));
    printf("%s|%s|%.2f\n", best->nim, best->name, best->average);
}

int run(char *inputFileName) {
    FILE * f = fopen(inputFileName, "r");
    if (f == NULL) {
        fprintf(stderr, "Error: Could not open file %s\n", inputFileName);
        return 1;
    }

    Nimon allNimons[MAX_NIMONS];
    char l[MAX_LINE_LENGTH];
    int count = 0;

    while (fgets(l, MAX_LINE_LENGTH, f) != NULL) {
        parseStudentData(l, allNimons + count);
        calculateStatistics(allNimons + count);
        writeStudentResult(allNimons + count);
        count++;
    }
    fclose(f);
    
    writeSummary(allNimons, count);
    return 0;
}
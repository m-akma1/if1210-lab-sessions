#include <stdio.h>
// #include "tester.h" // Comment this when developing in local

int isMark(int a, int b) {
    if (a == -1 && b == 99) return 1;
    else return 0;
}

int main () {
    // init(); // Comment this when developing in local
    const char* name_a = "file_a.txt";
    FILE* fa = fopen(name_a, "r");    
    const char* name_b = "file_b.txt";
    FILE* fb = fopen(name_b, "r");  

    int aa, ba, ab, bb;
    fscanf(fa, "%d %d", &aa, &ba);
    fscanf(fb, "%d %d", &ab, &bb);
    while ((!isMark(aa, ba)) &&(!isMark(ab, bb))) {
        if (aa < ab) {
            printf("%d %d\n", aa, ba);
            fscanf(fa, "%d %d", &aa, &ba);
        } else {
            printf("%d %d\n", ab, bb);
            fscanf(fb, "%d %d", &ab, &bb);
        }
    }

    while (!isMark(aa, ba)) {
        printf("%d %d\n", aa, ba);
        fscanf(fa, "%d %d", &aa, &ba);
    }

    while (!isMark(ab, bb)) {
        printf("%d %d\n", ab, bb);
        fscanf(fb, "%d %d", &ab, &bb);
    }

    fclose(fa);
    fclose(fb);
    return 0;
}
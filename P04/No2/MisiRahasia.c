#include <stdio.h>
#include <stdlib.h>
// #include "tester.h" // Comment this when developing in local

/* Tulis kode disini jika perlu */
int id[1001][3];

int cmp(int a1, int b1, int c1, int a2, int b2, int c2) {
    if (b1 == b2) {
        if (c1 > c2) return 1;
        else if (c1 == c2) {
            if (a1 > a2) return 1;
            else return 0;
        } else return 0;
    } else if (b1 > b2) return 1;
    else return 0;
}

int cmp1(int b1, int b2) {
    if (b1 > b2) return 1;
    else return 0;
}

int cmp2(int c1, int c2) {
    if (c1 > c2) return 1;
    else return 0;
}

int cmp3(int a1, int a2) {
    if (a1 > a2) return 1;
    else return 0;
}

int main() {
    init();
    const char* name = "input.txt";
    FILE* f = fopen(name, "r");    
    
    int a, b, c, n = 0;
    fscanf(f, "%d %d %d", &a, &b, &c);
    while (a != -1) {
        id[n][0] = a;
        id[n][1] = b;
        id[n][2] = c;
        fscanf(f, "%d %d %d", &a, &b, &c);
        n++;
    }
    fclose(f);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int a1, a2, b1, b2, c1, c2;
            a1 = id[j][0];
            b1 = id[j][1];
            c1 = id[j][2];
            a2 = id[j + 1][0];
            b2 = id[j + 1][1];
            c2 = id[j + 1][2];
            if (cmp1(b1, b2)) {
                int temp1 = id[j][0];
                int temp2 = id[j][1];
                int temp3 = id[j][2];
                id[j][0] = id[j + 1][0];
                id[j][1] = id[j + 1][1];
                id[j][2] = id[j + 1][2];
                id[j + 1][0] = temp1;
                id[j + 1][1] = temp2;
                id[j + 1][2] = temp3;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int a1, a2, b1, b2, c1, c2;
            a1 = id[j][0];
            b1 = id[j][1];
            c1 = id[j][2];
            a2 = id[j + 1][0];
            b2 = id[j + 1][1];
            c2 = id[j + 1][2];
            if (cmp2(c1, c2) && (b1 == b2)) {
                int temp1 = id[j][0];
                int temp2 = id[j][1];
                int temp3 = id[j][2];
                id[j][0] = id[j + 1][0];
                id[j][1] = id[j + 1][1];
                id[j][2] = id[j + 1][2];
                id[j + 1][0] = temp1;
                id[j + 1][1] = temp2;
                id[j + 1][2] = temp3;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int a1, a2, b1, b2, c1, c2;
            a1 = id[j][0];
            b1 = id[j][1];
            c1 = id[j][2];
            a2 = id[j + 1][0];
            b2 = id[j + 1][1];
            c2 = id[j + 1][2];
            if (cmp3(a1, a2) && (c1 == c2) && (b1 == b2)) {
                int temp1 = id[j][0];
                int temp2 = id[j][1];
                int temp3 = id[j][2];
                id[j][0] = id[j + 1][0];
                id[j][1] = id[j + 1][1];
                id[j][2] = id[j + 1][2];
                id[j + 1][0] = temp1;
                id[j + 1][1] = temp2;
                id[j + 1][2] = temp3;
            }
        }
    }

    const char* qname = "query.txt";
    FILE* q = fopen(qname, "r");    
    
    int t, k; fscanf(q, "%d", &t);
    while (t--) {
        fscanf(q, "%d", &k);
        printf("%d %d\n", id[k-1][0], id[k-1][2]);
    }
    fclose(q);
    return 0;
}
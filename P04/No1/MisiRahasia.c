#include <stdio.h>
#include <stdlib.h>
// #include "tester.h" // Comment this when developing in local

/* Tulis kode disini jika perlu */

int main() {
    init();
    const char* name = "input.txt";
    FILE* f = fopen(name, "r");
    
    int id[1001][2];
    int jumlah = 0;
    int a, b, c;
    int total = 0, berhasil = 0, nilai = 0;
    fscanf(f, "%d %d %d", &a, &b, &c);
    while (a != -1) {
        total++;
        berhasil += b;
        if (b) nilai += c;
        fscanf(f, "%d %d %d", &a, &b, &c);
    }

    printf("Total Misi: %d\n", total);
    printf("Misi Berhasil: %d\n", berhasil);
    printf("Total Nilai Misi: %d\n", nilai);
    fclose(f);
    return 0;
}
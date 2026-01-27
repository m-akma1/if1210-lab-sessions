#include <stdio.h>
#include "liststatik.h"

int main() {
    ListStatik gudang;
    CreateListStatik(&gudang);
    int n = 0;
    
    while(1) {
        int x; scanf("%d", &x);
        if (x == -1) break;

        int berat, indeks;
        if (x == 1) {
            scanf("%d %d", &berat, &indeks);
            if (isFull(gudang)|| 0 > indeks || indeks > n) printf("Aw, gabisa ngelakuin aksi itu\n");
            else {
                insertAt(&gudang, berat, indeks);
                n++;
            }
        } else {
            scanf("%d", &indeks);
            if (isEmpty(gudang) || 0 > indeks || indeks >= n) printf("Aw, gabisa ngelakuin aksi itu\n");
            else {
                deleteAt(&gudang, &berat, indeks);
                n--;
            }
        }

        printList(gudang); printf("\n");
    }
}
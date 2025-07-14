#include <stdio.h>
#include "time.h"

int main() {
    int n; scanf("%d", &n);
    int max = 86400, min = 0;
    TIME m1, m2;
    for (int i = 1; i <= n; i++) {
        printf("[%d]\n", i);
        TIME t1, t2;
        BacaTIME(&t1);
        BacaTIME(&t2);
        if (TGT(t1, t2)) {

            TIME swap;
            swap = t1;
            t1 = t2;
            t2 = swap;
        }

        long d1 = TIMEToDetik(t1);
        long d2 = TIMEToDetik(t2);
        long durasi = Durasi(t1, t2);
        printf("%ld\n", d2 - d1);

        if (d1 < max) {
            max = d1;
            m1 = DetikToTIME(d1);
        }
        if (d2 > min) {
            min = d2;
            m2 = DetikToTIME(d2);
        }
    }
    TulisTIME(m1);
    printf("\n");
    TulisTIME(m2);
    printf("\n");
}
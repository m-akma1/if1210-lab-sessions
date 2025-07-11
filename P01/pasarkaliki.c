#include <stdio.h>

int main () {
    long long n; scanf("%lld", &n);
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < n - i - 1; j++) printf(" ");
        for (long long j = 0; j < i + 1; j++) {
            long long p = 1;
            for(int k = i; k > j; k--) {
                if (k) p *= k;
                if (i - k + 1 <= i - j) p /= (i - k + 1);
            }
            printf("%lld", p);
            if (j < i) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
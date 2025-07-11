#include <stdio.h>

int main () {
    int n; scanf("%d", &n);
    int i = 1, p = 1;
    while (n / i > 9) i *= 10;

    while (n > 0 && p) {
        int f = n / i;
        int l = n % 10;
        if (f != l) p = 0;
        n -= f*i; n /= 10;
        i /= 100;
    }

    printf("%d\n", p);
    return 0;
}
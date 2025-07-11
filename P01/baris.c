#include <stdio.h>

int main () {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int a = i, b = j, c = 1;
            while (0 < b && a <= n) {a++; b--; c++;};
            int p = i + j - c + 1;
            for (int k = 2; k < i + j; k++) p += (k - 1);
            for (int d = i + j; d > n + 1; d--) p -= i + j - n;

            printf("%d", p);
            if (j < n) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main () {
    int n; scanf("%d", &n);
    
    int i = 2, f = 1;
    while (n > 1) {
        if (n % i == 0) {
            if (f) printf("%d", i);
            else printf(" * %d", i);
            f = 0;
            
            int count = 1;
            n /= i;
            if (n % i == 0) {
                while (n % i == 0) {
                    count++;
                    n /= i;
                }
                printf("^%d", count);
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}
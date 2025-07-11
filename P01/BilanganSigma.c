#include <stdio.h>
#include <math.h>

int main () {
    int n; scanf("%d", &n);
    int counter = 0;
    for(int i = 1; (i * i) <= n; i++) {
        if (n % i == 0) {
            double x = sqrt((double)i);
            if ((int)x * (int)x == i) {
                counter = counter + 1;
            }
            int y = n / i;
            x = sqrt((double)y);
            if ((int)x * (int)x == n/i) {
                counter = counter + 1;
            }
        }
    }
    printf("%d\n", counter);
    return 0;
}
#include <stdio.h>
#include <math.h>


int main() {
    int n; scanf("%d", &n);
    while (n--) {
        double x; char a, b;
        scanf("%lf %c %c", &x, &a, &b);
        switch (a) {
        case 'C':
                if (b == 'F') x = (x * 9.0 / 5.0) + 32.0;
                else x = x + 273.15;
            break;
        case 'K':
            if (b == 'C') x = x - 273.15;
            else x = ((x - 273.15) * 9.0 / 5.0) + 32.0;
            break;
        case 'F':
            if (b == 'C') x = (x - 32.0) * 5.0 / 9.0;
            else x = ((x - 32.0) * 5.0 / 9.0) + 273.15;
            break;        
        default:
            break;
        }

        x = floor(x);
        printf("%0.2lf\n", x); 
    }

    return 0;
}
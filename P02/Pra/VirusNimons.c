#include <stdio.h>

int main() {
    long long n; scanf("%lld", &n);
    long long t; scanf("%lld", &t);
    long long x; scanf("%lld", &x);
    
    long long virus = 1;
    long long current_exp = 1;
    for (long long i = 0; i < t; i++) {
        current_exp *= x;
        virus += current_exp;
    }

    printf("Terdapat %lld Virus Nimons Gila pada jam ke-%lld\n", virus*n, t);
    return 0;
}
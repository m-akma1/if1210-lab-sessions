#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);
    long long current = 0;
    long long next = 1;
    for (int i = 0; i < N; i++) {
        printf("%lld", current);
        if (i < N - 1)printf(" ");
        long long sum = current + next;
        current = next;
        next = sum;
    }
    printf("\n");
    return 0;
}
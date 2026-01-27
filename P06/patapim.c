#include <stdio.h>

int abs(int x) {
    if (x < 0) return -x;
    else return x;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n; scanf("%d", &n);
    int a[n]; for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int answer = abs(a[1] - a[0]);
    for (int i = 2; i < n; i++) {
        answer = gcd(answer, abs(a[i] - a[i - 1]));
        if (answer == 1) break;
    }

    printf("%d\n", answer);
}


#include <stdio.h>

int main () {
    int n; scanf("%d", &n);
    int num[n]; for (int i = 0; i < n; i++) scanf ("%d", num + i);
    int x; scanf("%d", &x);

    int a = -1, b = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (num[i] + num[j] == x) {
                b = j;
                break;
            }
        }
        a = i;
        if (num[a] + num[b] == x) break;
    }

    printf("[%d, %d]\n", a, b);
}
#include <stdio.h>

int main () {
    int n, k; scanf("%d %d", &n, &k);
    int arr[n]; for(int i = 0; i < n; i++) scanf("%d", arr + i);

    for(int i = 0; i < n; i++) {
        int idx = (i - k) % n;
        if (idx < 0) idx += n;
        printf("%d", arr[idx]);
        printf("%s", (i < n - 1) ? " " : "\n");
    }
}
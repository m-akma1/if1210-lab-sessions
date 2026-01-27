#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    char *nimon[5] = {"Kebin", "Stewart", "Pop", "Luiy", "Toto"};

    long long prev[5], curr[5];
    double imp[5] = {0};
    for (int i = 0; i < 5; i++) scanf("%lld", &prev[i]);
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%lld", &curr[j]);
            imp[j] += (double)(curr[j] - prev[j]);
            prev[j] = curr[j];
        }
    }

    for (int i = 0; i < 5; i++) imp[i] /= (N - 1);

    int min_index = 0;
    for (int i = 1; i < 5; i++) {
        if (imp[i] < imp[min_index]) {
            min_index = i;
        }
    }

    printf("%s\n", nimon[min_index]);
    return 0;
}

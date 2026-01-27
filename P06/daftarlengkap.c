#include <stdio.h>

int main() {
    int N, M;
    scanf("%d", &N);
    int A[N]; for (int i = 0; i < N; i++) scanf("%d", &A[i]);
    scanf("%d", &M);
    int B[M]; for (int j = 0; j < M; j++) scanf("%d", &B[j]);

    int C[N + M];
    int i = 0, j = 0, k = 0;
    while (i < N && j < M) {
        if (A[i] < B[j]) C[k++] = A[i++];
        else C[k++] = B[j++];
    }

    while (i < N) C[k++] = A[i++];
    while (j < M) C[k++] = B[j++];

    printf("[");
    for (int k = 0; k < M + N; k++) {
        printf("%d", C[k]);
        if (k < M + N - 1) printf(",");
    }
    printf("]\n");
}
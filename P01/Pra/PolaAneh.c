#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i < N/2) {
                if ((N/2 + i - j == 0) || (N/2 - i - j ==0)) printf("*");
                else printf(".");    
            } else {
                if ((N/2 + (N - i) - 1 - j == 0) || (N/2 - (N - i) + 1- j ==0)) printf("*");
                else printf(".");    
            }
        }
        printf("\n");
    }

    return 0;
}
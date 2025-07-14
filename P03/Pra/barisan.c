#include <stdio.h>

int fpb(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int kpk(int a, int b) {
    return (a / fpb(a, b)) * b;
}

int main() {
    int n; scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    
    if (!n) printf("0\n");
    else if (n == 1) printf("%d\n", A[0]*A[0]);
    else {
        int GCD[n][2]; GCD[0][0] = A[0]; GCD[n - 1][1] = A[n - 1];
        int LCM[n][2]; LCM[0][0] = A[0]; LCM[n - 1][1] = A[n - 1];
        for (int i = 1; i < n; i++) {
            GCD[i][0] = fpb(A[i], GCD[i - 1][0]);
            LCM[i][0] = kpk(A[i], LCM[i - 1][0]);
            GCD[n - 1 - i][1] = fpb(A[n - 1 - i], GCD[n - i][1]);
            LCM[n - 1 - i][1] = kpk(A[n - 1 - i], LCM[n - i][1]);
        }

        int max = GCD[0][1]*LCM[0][1];
        for (int i = 0; i < n; i++) {
            int current;
            if (i == 0) current = LCM[1][1] * GCD[1][1];
            else if (i == n - 1) current = LCM[n - 2][0] * GCD[n - 2][0];
            else {
                current = fpb(GCD[i - 1][0], GCD[i + 1][1]);
                current *= kpk(LCM[i - 1][0], LCM[i + 1][1]);
            }

            if (current > max) max = current;
        }

        printf("%d\n", max);
    }
}
#include "TekaTeki.h"

long long kombinasi(int n, int k) { 
    long long result = 1;
    k = (k > n - k) ? n - k : k;

    for (int i = 0; i < k; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

long long catalan(int n) {
    return kombinasi(2 * n, n) / (n + 1);
}
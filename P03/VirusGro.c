#include <stdio.h>

int search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

void sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, k; scanf("%d %d", &n, &k);
    int arr[n], temp[n], house[k]; 
    for(int i = 0; i < n; i++) {
        scanf("%d", arr + i);
        temp[i] = arr[i];
    }
    sort(temp, n);

    long long score = 0LL;
    for (int i = 0; i <= k; i++) {
        if (temp[i] < 0) {
            if (i == 0) {
                score += temp[i];
                int idx = search(arr, n, temp[i]);
                if (idx == 0) score += arr[n - 1];
                else if (idx = n - 1) score += arr[0];
                else {
                    if (idx > 1 || idx < n - 2) {
                        if (1);
                    }
                    score += temp[i + 1];

                }
                break;
            } else if (i == 1) {
                int idx = search(arr, n, temp[i - 1]);
                if (idx == 0) score += arr[n - 1];
                else if (idx = n - 1) score += arr[0];
                else score += temp[i];
                break;
            } else break;
        } else {
            house[i] = temp[i];
            score += temp[i];
        }
    }

    printf("%lld\n", score);
}
#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    if (left == right) {
        if (arr[left] == target) return left;
        else return -1;
    } else {
        int middle = (left + right) / 2;
        if (arr[middle] < target) return  binarySearch(arr, middle + 1, right, target);
        else return binarySearch(arr, left, middle, target);
    }
}

int main () {
    int n, q;
    scanf("%d", &n);
    int arr[n]; for(int i = 0; i < n; i++) scanf("%d", arr + i);

    scanf("%d", &q);
    int target[q]; for(int i = 0; i < q; i++) scanf("%d", target + i);

    for (int i = 0; i < q; i++) target[i] = binarySearch(arr, 0, n - 1, target[i]);

    printf("[");
    for (int i = 0; i < q; i++) {
        printf("%d", target[i]);
        printf("%s", (i < q - 1) ? ", " : "]\n");
    }
}
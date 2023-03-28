#include <stdio.h>

int linear_search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // return index if found
        }
    }
    return -1;  // return -1 if not found
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    int n = sizeof(arr) / sizeof(int);

    int key = 15;
    int index = linear_search(arr, n, key);
    if (index == -1) {
        printf("%d not found in the array\n", key);
    } else {
        printf("%d found at index %d\n", key, index);
    }

    key = 100;
    index = linear_search(arr, n, key);
    if (index == -1) {
        printf("%d not found in the array\n", key);
    } else {
        printf("%d found at index %d\n", key, index);
    }

    return 0;
}

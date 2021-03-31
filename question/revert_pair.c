#include <stdio.h>

void revert_pair_esay(int* arr, int length) {
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j]) {
                printf("%d:%d\n", arr[i], arr[j]);
            }
        }
    }
}

void revert_pair(int* arr, int start, int end) {
    if (start == end) {
        return;
    }
    int mid = start + ((end - start) / 2);
    revert_pair(arr, start, mid);
    revert_pair(arr, mid + 1, end);
    int i = mid, j = end, m = end - start;
    int temp[end - start + 1];
    while (i >= start && j >= mid + 1) {
        if (arr[i] <= arr[j]) {
            temp[m--] = arr[j--];
        } else {
            int tmp = j;
            while (j >= mid + 1) {
                printf("%d:%d\n", arr[i], arr[j--]);
            }
            j = tmp;
            temp[m--] = arr[i--];
        }
    }
    while (i >= start) {
        temp[m--] = arr[i--];
    }
    while (j >= mid + 1) {
        temp[m--] = arr[j--];
    }
    for (int n = start, z = 0; z < end - start + 1; n++, z++) {
        arr[n] = temp[z];
    }
}
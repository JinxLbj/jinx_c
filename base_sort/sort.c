#include <stdio.h>

void swap(int* arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void select_sort(int* arr, int length) {
    for (int i = 0; i < length; i++) {
        int min = arr[i];
        int index = i;
        for (int j = i + 1; j < length; j++) {
            if (arr[j] < min) {
                min = arr[j];
                index = j;
            }
        }
        swap(arr, i, index);
    }
}

void bubbling_sort(int* arr, int length) {
    for (int i = length; i > 0; i--) {
        for (int j = 1; j < i; j++) {
            if (arr[j - 1] > arr[j]) {
                swap(arr, j - 1, j);
            }
        }
    }
}

void insert_sort(int* arr, int length) {
    for (int i = 1; i < length; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j - 1] > arr[j]) {
                swap(arr, j - 1, j);
            } else {
                break;
            }
        }
    }
}

void merge_sort(int* arr, int start, int end) {
    if (start == end) {
        return;
    }
    int mid = start + ((end - start) / 2);
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);
    int i = start, j = mid + 1, m = 0;
    int temp[end - start + 1];
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[m++] = arr[i++];
        } else {
            temp[m++] = arr[j++];
        }
    }
    while (i <= mid) {
        temp[m++] = arr[i++];
    }
    while (j <= end) {
        temp[m++] = arr[j++];
    }
    for (int n = start, z = 0; z < end - start + 1; n++, z++) {
        arr[n] = temp[z];
    }
}
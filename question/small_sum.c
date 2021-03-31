void small_sum_esay(int* arr, int length, int* sum) {
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            if (arr[i] < arr[j]) {
                sum[0] += arr[i];
            }
        }
    }
}

void small_sum(int* arr, int start, int end, int* sum) {
    if (start == end) {
        return;
    }
    int mid = start + ((end - start) / 2);
    small_sum(arr, start, mid, sum);
    small_sum(arr, mid + 1, end, sum);
    int i = start, j = mid + 1, m = 0;
    int temp[end - start + 1];
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            sum[0] += arr[i] * (end - j + 1);
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
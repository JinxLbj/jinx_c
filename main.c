#include <stdio.h>
#include "base_sort/sort.h"
#include "question/small_sum.h"
#include "question/revert_pair.h"

void small_sum_question() {
    int arr[10] = {2, 1, 0, 4, 4, 7, 6, 11, 8, 9};
    int sum1[1] = {0};
    int sum2[1] = {0};
    int length = sizeof(arr) / sizeof(arr[0]);
    small_sum_esay(arr, length, sum1);
    small_sum(arr, 0, length - 1, sum2);
    printf("%d %d", sum1[0], sum2[0]);
}

void revert_pair_question() {
    int arr[10] = {2, 1, 0, 4, 4, 7, 6, 11, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    revert_pair_esay(arr, length);
    printf("\n");
    revert_pair(arr, 0, length - 1);
}

void quick() {
    int arr[10] = {2, 1, 0, 4, 4, 7, 6, 11, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, 0, length - 1);
    for (int i = 0; i < length; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
//    small_sum_question();
//    revert_pair_question();
    quick();
    return 0;
}
#include "../inc/libmx.h"

static void swap(char **arr, int l, int r) {
    char *tmp;

    tmp = arr[l];
    arr[l] = arr[r];
    arr[r] = tmp;
}

int mx_quicksort(char **arr, int left, int right) {
    int swaps = 0;
    int left_tmp = left;
    int right_tmp = right;
    int pivot = (left + right) / 2;

    if (arr == NULL || *arr == NULL) return -1;
    while (left_tmp < right_tmp) {
        while (mx_strlen(arr[left_tmp]) < mx_strlen(arr[pivot]))
            left_tmp++;
        while (mx_strlen(arr[right_tmp]) > mx_strlen(arr[pivot]))
            right_tmp--;
        if (left_tmp <= right_tmp) {
            swap(arr, left_tmp++, right_tmp--);
            swaps++;
        }
        if (left < right_tmp) mx_quicksort(arr, left, right_tmp);
        if (right > left_tmp) mx_quicksort(arr, left_tmp, right);
    }
    return swaps;
}

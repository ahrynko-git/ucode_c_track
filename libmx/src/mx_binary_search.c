#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int m;
    int l = 0;
    int r = size - 1; 
    
    *count = 0;
    while (l <= r) {
        m = l + (r - l) / 2;
        *count += 1;
        if (mx_strcmp(arr[m], s) > 0)
            r = m - 1;
        else if (mx_strcmp(arr[m], s) < 0)
            l = m + 1;
        else
            return m;
    }
    *count = 0;
    return -1;
}

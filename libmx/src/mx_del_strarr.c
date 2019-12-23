#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
    char **ptr_arr = *arr;

    while (*ptr_arr) {
        mx_strdel(ptr_arr);
        ptr_arr++;
    }
    free(*arr);
    *arr = NULL;
    arr = NULL;
}

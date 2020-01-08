#include "libmx.h"

char *mx_itoa(int number) {
    char *res;
    int len = 1;
    int sign = 0;
    long long_int = number;

    if (number < 0) {
        sign = 1;
        long_int = -number;
        len++;
    }
    for (long i = long_int; i / 10 != 0; i /= 10)
        len++;
    res = mx_strnew(len);
    while (len--) {
        res[len] = long_int % 10 + '0';
        long_int /= 10;
    }
    if (sign)
        res[0] = '-';
    return res;
}

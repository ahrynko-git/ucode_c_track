#include "../inc/libmx.h"

char *mx_itoa(int number) {
    char *res;
    int len = 1;
    int sign = 0;

    if (number < 0) {
        sign = 1;
        number *= -1;
        len++;
    }
    for (int i = number; i / 10 != 0; i /= 10)
        len++;
    res = mx_strnew(len);
    while(len--) {
        res[len] = number % 10 + '0';
        number /= 10;
    }
    if (sign)
        res[0] = '-';
    return res;
}

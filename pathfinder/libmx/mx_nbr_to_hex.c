#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char *res;
    int len = 1;

    for (unsigned long i = nbr; i / 16 != 0; i /= 16)
        len++;
    res = mx_strnew(len);
    for (unsigned long i = nbr; i > 0; i /= 16) {
        len--;
        if (i % 16 < 10)
            res[len] = i % 16 + '0';
        else
            res[len] = i % 16 + 'a' - 10;
    }
    return res;
}

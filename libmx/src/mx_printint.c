#include "libmx.h"

void mx_printint(int n) {
    long long_int = n;

    if (long_int < 0) {
        mx_printchar('-');
        long_int *= -1;
    }
    if (long_int / 10 != 0)
        mx_printint(long_int / 10);
    mx_printchar(long_int % 10 + '0');
}

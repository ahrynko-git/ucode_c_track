#include "../inc/libmx.h"

int mx_sqrt(int x) {
    if (x > 2147395600 || x < 0)
        return 0;
    if (x == 1)
        return 1;
    for (unsigned int i = 1; i <= (unsigned int)x / 2; i++) {
        if (i * i == (unsigned int)x)
            return i;
    }
    return 0;
}

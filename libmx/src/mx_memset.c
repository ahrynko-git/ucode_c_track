#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    unsigned char *p_b = b;

    for (; len > 0; len--, p_b++)
        *p_b = c;
    return b;
}

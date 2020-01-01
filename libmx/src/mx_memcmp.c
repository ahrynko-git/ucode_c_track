#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    const char *p_s1 = s1;
    const char *p_s2 = s2;

    if (n == 0)
        return 0;
    for (; n && *p_s1 == *p_s2 && *p_s1 && *p_s2; n--, p_s1++, p_s2++) {}
    return *p_s1 - *p_s2;
}


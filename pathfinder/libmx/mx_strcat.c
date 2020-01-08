#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    int i = 0;
    int s1_len = mx_strlen(s1);

    for (; s2[i]; i++)
        s1[s1_len + i] = s2[i];
    s1[s1_len + i] = '\0';
    return s1;
}

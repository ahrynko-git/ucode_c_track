#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    char *res;

    if (!s1 && !s2)
        return NULL;
    if (!s1)
        return mx_strdup(s2);
    if (!s2)
        return mx_strdup(s1);
    res = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
    return mx_strcat(mx_strcpy(res, s1), s2);
}

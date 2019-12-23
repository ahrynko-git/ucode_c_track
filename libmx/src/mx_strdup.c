#include "../inc/libmx.h"

char *mx_strdup(const char *s1) {
    char *res = mx_strnew(mx_strlen(s1));
    return mx_strcpy(res, s1);
}

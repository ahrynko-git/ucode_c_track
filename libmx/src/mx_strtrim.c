#include "libmx.h"

char *mx_strtrim(const char *str) {
    if (!str)
        return NULL;
    char *res;
    int i = 0;
    int space_before = 0;
    int space_after = mx_strlen(str) - 1;

    for (; mx_isspace(str[space_before]); space_before++);
    for (; mx_isspace(str[space_after]); space_after--);
    res = mx_strnew(space_after - space_before + 2);
    for (; space_before != space_after + 1; i++, space_before++)
        res[i] = str[space_before];
    res[i] = '\0';
    return res;
}

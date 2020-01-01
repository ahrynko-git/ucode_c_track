#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
    int i = 0;
    char *res;
    int space_before = 0;
    int space_after = mx_strlen(str) - 1;

    if (!str)
        return NULL;
    while (mx_isspace(str[space_before]))
        space_before++;
    while (mx_isspace(str[space_after]))
        space_after--;
    res = mx_strnew(space_after - space_before + 2);
    for (; space_before < (space_after + 1); i++, space_before++)
        res[i] = str[space_before];
    res[i] = '\0';
    return res;
}

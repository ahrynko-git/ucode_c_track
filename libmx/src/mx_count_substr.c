#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int counter = 0;
    char *s;

    if (!str || !sub)
        return -1;
    while (*str) {
        s = mx_strstr(str, sub);
        if (s) {
            str = s + strlen(sub) - 1;
            counter++;
        }
        str++;
    }
    return counter;
}

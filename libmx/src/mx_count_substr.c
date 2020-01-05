#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int counter = 0;
    char *s;

    if (!str || !sub)
        return -1;
    for (; *str; str++) {
        s = mx_strstr(str, sub);
        if (s) {
            str = s + mx_strlen(sub) - 1;
            counter++;
        }
    }
    return counter;
}

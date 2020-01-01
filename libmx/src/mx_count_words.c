#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
    int counter = 0;

    if (!str)
        return -1;
    while (*str == c)
        str++;
    for (; *str; str++) {
        if (*str == c) {
            while (*str == c)
                str++;
            if (*str != '\0' && *str != c)
                counter++;
        }
    }
    return counter ? ++counter : counter;
}

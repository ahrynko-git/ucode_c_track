#include "libmx.h"

int mx_count_words(const char *str, char c) {
    if (!str)
        return -1;
    int counter = 0;

    for (; *str; ) {
        if (*str == c)
            for (; *str == c && *str; str++);
        if (*str != c && *str) {
            counter++;
            for (; *str != c && *str; str++);
        }
    }
    return counter;
}

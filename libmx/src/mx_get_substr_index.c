#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int j;

    if (!str || !sub)
        return -2;
    for (int i = 0; str[i]; i++) {
        for (j = 0; str[i + j] == sub[j]; j++) {}
        if (sub[j] == '\0')
            return i;
    }
    return -1;
}

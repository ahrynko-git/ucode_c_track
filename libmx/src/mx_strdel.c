#include "libmx.h"

void mx_strdel(char **str) {
    if (str != NULL && *str) {
        free(*str);
        *str = NULL;
    }
}

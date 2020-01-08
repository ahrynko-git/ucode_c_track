#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    char *start = (char*)haystack;

    if (*needle == '\0')
        return start;
    for (;*haystack; haystack = ++start) {
        for (start = (char*)haystack; *needle == *haystack && *haystack; \
        haystack++, needle++);
        if (*needle == '\0')
            return start;
    }
    return NULL;
}

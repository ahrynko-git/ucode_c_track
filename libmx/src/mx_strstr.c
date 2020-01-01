#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    int heystack_len = mx_strlen(haystack);
    int needle_len = mx_strlen(needle);
    
    return mx_memmem(haystack, heystack_len, needle, needle_len);
}

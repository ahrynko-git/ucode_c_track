#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    char *new_str;
    int k = 0;

    if(str == NULL || sub == NULL || replace == NULL)
        return NULL;
    new_str = mx_strnew(mx_strlen(str) + mx_count_substr(str, sub) * (mx_strlen(replace) - mx_strlen(sub)));
    for (int i = 0, j = 0; str[i]; j = 0) {
        for (; str[i + j] == sub[j] && str[i + j]; j++) {}
        if (!sub[j]) {
            new_str = mx_strjoin(new_str, replace);
            i += mx_strlen(sub);
            k += mx_strlen(replace);
            continue;
        }
        new_str[k++] = str[i++];
    }
    new_str[k] = '\0';
    return mx_strdup(new_str);
}

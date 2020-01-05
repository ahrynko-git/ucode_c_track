#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (!s)
        return NULL;
    int n = 0;
    char **res = malloc(sizeof(char *) * mx_count_words(s, c) + 1);

    for (int i = 0, j; s[i]; i++) {
        if (s[i] != c) {
            for (j = 0; s[i] != c && s[i]; i++, j++) {}
            res[n] = mx_strnew(j + 1);
            for (i -=j, j = 0; s[i] != c && s[i]; i++, j++)
                res[n][j] = s[i];
            res[n][j] = '\0';
            n++;
        }
    }
    res[n] = NULL;
    return res;
}

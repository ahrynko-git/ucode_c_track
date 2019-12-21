#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
	return mx_memmem(haystack, mx_strlen(haystack), needle, mx_strlen(needle));
}

/*
char *mx_strstr(const char *haystack, const char *needle)
{
    int j;
    int i = 0;
    
    while(needle[i])
    {
        j = 0;

        while(needle[i + j] == haystack[j] && needle[i] && haystack[j])
            j++;

        if(haystack[j] == '\0')
            return (char *)needle + i;

        i++;
    }

    return NULL;
}
*/
/*
char *mx_strstr(const char *haystack, const char *needle) {
    char *begin = (char*) haystack;

    if (*needle == '\0')
        return (begin);
    
    while (*haystack != '\0') {
        begin = (char*) haystack;

        while (*needle == *haystack && *haystack != '\0') {
            ++haystack;
            ++needle;
        }
        if (*needle == '\0')
            return (begin);
        haystack = begin + 1;
    }
    return NULL;
}
*/
/*
int main()
{
    char *needle = "Hello world!";
    char *haystack = " worl";

    printf("mx_strstr %s\n", mx_strstr(haystack, needle));
    printf("strstr %s\n", strstr(needle, haystack));

    printf("mx_strstr %s\n", mx_strstr("Ururu turu", "ru"));
    printf("strstr %s\n", strstr("Ururu turu", "ru"));

    return 0;
}
*/

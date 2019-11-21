// #include <stdio.h>
#include <string.h>

int mx_strlen(const char *s);

char *mx_strstr(const char *haystack, const char *needle)
{
    int j;
    int i = 0;
    
    while(needle[i])
    {
        j = 0;

        while(needle[i + j] == haystack[j])
            j++;

        if(!haystack[j])
            return (char *)needle + i;

        i++;
    }

    return NULL;
}
/*
int main()
{
    char *needle = "Hello world!";
    char *haystack = " world";

    printf("%s\n", mx_strstr(haystack, needle));
    printf("%s\n", strstr(needle, haystack));

    return 0;
}
*/

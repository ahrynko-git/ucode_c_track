#include <stdio.h>
#include <string.h>

void *mx_memchr(const void *s, int c, size_t n)
{
    const char *p_s = s;

    while (n--)
    {
        if (*p_s == c)
            return (char *)p_s;

        p_s++;
    }

    return NULL;
}

int main()
{
    char str[] = "Hello";
    char str1[] = "Hello";

    printf("%s\n", mx_memchr(str, 0, 3));
    printf("%s\n", memchr(str1, 0, 3));

    return 0;
}


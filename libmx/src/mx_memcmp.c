#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *p_s1 = s1;
    const char *p_s2 = s2;

    if (n == 0)
        return 0;

    while(n-- && *p_s1 == *p_s2 && *p_s1 && *p_s2)
    {
        p_s1++;
        p_s2++;
    }

    return *p_s1 - *p_s2;
}
/*
int main()
{
    char s1[] = "aac";
    char s2[] = "aac";

    char s11[] = "aac";
    char s22[] = "aac";

    printf("%d\n", mx_memcmp(s1, s2, 4));
    printf("%d\n", memcmp(s11, s22, 4));

    return 0;
}
*/

#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len)
{
    const char *p_big = big;
    const char *p_little = little;

    if (big_len >= little_len && big_len > 0 && little_len > 0)
	{
        while (*p_big)
		{
			if (mx_memcmp(p_big, p_little, little_len - 1) == 0)
                return (char *)p_big;

			p_big++;
		}
    }

    return NULL;
}
/*
int main()
{
    printf("%s\n", mx_memmem("abcdef", 4, "cd", 2));
    printf("%s\n", memmem("abcdef", 4, "cd", 2));

    return 0;
}
*/

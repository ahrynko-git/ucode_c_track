// #include <stdio.h>
// #include <string.h>

void *mx_memset(void *b, int c, size_t len)
{
    char *p = b;

    while (len--)
        *p++ = c;

    return b;
}
/*
int main()
{
    char str[] = "Hello world!";
    char str1[] = "Hello world!";

    printf("before %s\n", str);
    printf("before %s\n", str1);

    memset(str, 48, 2);
    mx_memset(str1, 48, 2);

    printf("after %s\n", str);
    printf("after %s\n", str1);

    return 0;
}
*/

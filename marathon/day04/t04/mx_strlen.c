// #include <stdio.h>

int mx_strlen(const char *s)
{
    int i = 0;

    while(s[i])
        i++;

    return i;
}
/*
int main()
{
    char *s = "Hello";
    printf("strlen - %d\n", mx_strlen(s));
    return 0;
}
*/

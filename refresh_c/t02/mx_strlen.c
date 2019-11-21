// #include <stdio.h>

int mx_strlen(const char *s)
{
    int counter = 0;

    while(s[counter])
        counter++;

    return counter;
}
/*
int main()
{
    printf("len: %d\n", mx_strlen("Hello"));
    return 0;
}
*/

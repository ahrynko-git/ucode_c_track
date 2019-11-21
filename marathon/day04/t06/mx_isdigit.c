#include <stdbool.h>
// #include <stdio.h>

bool mx_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return true;
    return false;
}
/*
int main()
{
    printf("%d\n", mx_isdigit('5'));
    return 0;
}
*/

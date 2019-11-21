#include <stdbool.h>
// #include <stdio.h>

bool mx_isspace(char c)
{
    if ((c >= '\t' && c <= '\r') || c == ' ')
        return true;
    return false;
}
/*
int main()
{
    printf("spce - %d\n", mx_isspace('a'));
    return 0;
}
*/

// #include <stdio.h>

int mx_sqrt(int x)
{
    if (x > 2147395600 || x < -2147395600)
        return 0;

    if (x == 1)
        return 1;

    if (x > 1)
    {
        for(unsigned int i = 1; i <= (unsigned int)x / 2; i++)
        {
            if (i * i == (unsigned int)x)
                return i;
        }
    }
    return 0;
}
/*
int main()
{
    printf("res %d\n", mx_sqrt(0)); // 0
    printf("res %d\n", mx_sqrt(1)); // 1
    printf("res %d\n", mx_sqrt(2)); // 0
    printf("res %d\n", mx_sqrt(3)); // 0
    printf("res %d\n", mx_sqrt(4)); // 2
    printf("res %d\n", mx_sqrt(8)); // 0
    printf("res %d\n", mx_sqrt(2147395600)); // 46340
    printf("res %d\n", mx_sqrt(-2147483648)); // ?
    printf("res %d\n", mx_sqrt(2147483647)); // ?
    

    return 0;
}
*/

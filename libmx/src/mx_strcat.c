// #include <stdio.h>

int mx_strlen(const char *s);

char *mx_strcat(char *restrict s1, const char *restrict s2)
{
    int i = 0;
    int s1_len = mx_strlen(s1);

    while(s2[i])
    {
        s1[s1_len + i] = s2[i];
        i++;
    }

    s1[s1_len + i] = '\0';

    return s1;
}
/*
int main()
{
    char *s2 = " world!";
    char s1[] = "Hello";

    printf("%s\n", mx_strcat(s1, s2));
    printf("%s\n", s1);

    return 0;
}
*/

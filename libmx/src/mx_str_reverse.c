// #include <stdio.h>

int mx_strlen(const char *s);

void mx_str_reverse(char *s)
{
    char tmp;
    int i = 0;
    int len = mx_strlen(s) - 1;

    while(i != len)
    {
        tmp = s[i];
        s[i] = s[len];
        s[len] = tmp;
        i++;
        len--;
    }
}
/*
int main()
{
    char str[] = "game over";
    mx_str_reverse(str);
    printf("%s\n", str);
}
*/

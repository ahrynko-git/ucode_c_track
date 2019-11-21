// #include <stdio.h>
// #include <string.h>

int mx_strlen(const char *s);

void *mx_memrchr(const void *s, int c, size_t n)
{
    const char *p_s = s;

    int len = mx_strlen(p_s);

    while(len-- && n--)
    {
        if(p_s[len] == c)
            return (char*)p_s + len;
    
    }

    return NULL;
}
/*
int main()
{
    printf("%s\n", mx_memrchr("Trinity", 'i', 7)); //returns "ity"
    printf("%s\n", mx_memrchr("Trinity", 'M', 7)); //returns NULL

    return 0;
}
*/

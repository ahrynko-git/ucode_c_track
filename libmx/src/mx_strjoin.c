#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2)
{
    if (s1 == NULL && s2 == NULL)
        return NULL;

    if (s1 == NULL)
        return mx_strdup(s2);

    if (s2 == NULL)
        return mx_strdup(s1);

    char *res = mx_strnew(mx_strlen(s1) + mx_strlen(s2));

    return mx_strcat(mx_strcpy(res, s1), s2);
}
/*
int main()
{
    char *str1 = "this";
    char *str2 = "dodge ";
    char *str3 = NULL;
    
    printf("%s\n", mx_strjoin(str2, str1)); //returns "dodge this"
    printf("%s\n", mx_strjoin(str1, str3)); //returns "this"
    printf("%s\n", mx_strjoin(str3, str3)); //returns NULL
}
*/
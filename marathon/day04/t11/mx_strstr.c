// #include <stdio.h>
// #include <string.h>

char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2) {

    int n = mx_strlen(s2);
    // char *crop_s1;
    int i = 0;
    int j = 0;
/*
    while(*s1){
        crop_s1 = mx_strchr(s1, s2[0]);
        if (mx_strncmp(crop_s1, s2, n) == 0)
            return crop_s1;
        s1++;
    }
*/    

    while(s1[i]){
        j = 0;
        while(s1[i + j] == s2[j]){
            if (s2[j] == '\0')
                return (char *)s1 + i;
            j++;
        }
        i++;
    }

    return 0;
}
/*
int main(){

    char *s1 = "abc abd";
    char *s2 = "abd";

    printf("res mx_strstr %s\n", mx_strstr(s1, s2));
    printf("res strstr %s\n", strstr(s1, s2));

    return 0;
}
*/

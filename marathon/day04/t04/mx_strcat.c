// #include <stdio.h>

int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2){
    int i = 0;
    int s1_len = mx_strlen(s1);

    while(s2[i]){
        s1[s1_len + i] = s2[i];
        i++;
    }
    s1[s1_len + i] = '\0';
    return s1;
}
/*
int main(){
    char s1[] = "Hello ";
    char s2[] = "world";
    char s3[] = "!";
    printf("1 %s\n", mx_strcat(s1, s2));
    printf("s1 %s\n", s1);
    printf("s3 %s\n", s3);
    printf("2 %s\n", mx_strcat(s1, s3));
    return 0;
}
*/

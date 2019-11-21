#include <stdio.h>
// #include <string.h>

char *mx_strncpy(char *dst, const char *src, int len){
    int i = 0;

    while(src[i] && i < len){
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}
/*
int main(){
    char src[11] = "abcd";
    char dst[11];
    printf("%s\n", mx_strncpy(dst, src, 6));
    printf("%s\n", mx_strncpy(dst, src, 6));
    return 0;
}
*/

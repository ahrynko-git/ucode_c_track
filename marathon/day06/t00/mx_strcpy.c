// #include <stdio.h>

char *mx_strcpy(char *dst, const char *src){    
    int i = 0;

    while(src[i]){
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}
/*
int main(){
    char *src = "Hello";
    char dst[6];

    printf("%s\n", mx_strcpy(dst, src));

    return 0;
}
*/

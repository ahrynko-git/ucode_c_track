#include <stdio.h>
// #include <string.h>

int mx_strncmp(const char *s1, const char *s2, int n){
    int i = 0;
    while(i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return s1[i] - s2[i];
}
/*
int main(){
    char *s1 = "abcf";
    char *s2 = "abcd";
    printf("%d\n", mx_strncmp(s1, s2, 2));
    printf("%d\n", strncmp(s1, s2, 2));
    return 0;
}
*/

// #include <stdio.h>

void mx_swap_char(char *s1, char *s2){
    char tmp;

    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}
/*
int main(){
    char str[] = "ONE";
    mx_swap_char(&str[0], &str[1]); //'str' now is "NOE"
    printf("%s\n", str);
    mx_swap_char(&str[1], &str[2]); //'str' now is "NEO"
    printf("%s\n", str);
}
*/

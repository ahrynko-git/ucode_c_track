// #include <stdio.h>

int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s){
    for(int i = 0, j = mx_strlen(s) - 1; i != j; i++, j--)
        mx_swap_char(&s[i], &s[j]);
}
/*
int main(){
    char str[] = "game over";
    mx_str_reverse(str); //'str' now is "revo emag"
    printf("%s\n", str);
    return 0;
}
*/

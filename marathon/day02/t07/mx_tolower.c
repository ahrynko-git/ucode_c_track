// #include <stdio.h>

int mx_tolower(int c) {
   if(c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}
/*
int main(){
    printf("%c\n", mx_tolower('z'));
    printf("%c\n", mx_tolower('Z'));
    return 0;
}
*/

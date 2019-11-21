// #include <stdio.h>

int mx_mid(int a, int b, int c){
    if ((a >= b && a <= c) || (a <= b && a >= c))
        return a;
    if ((b >= a && b <= c) || (b <= a && b >= c))
        return b;
    if ((c >= a && c <= b) || (c <= a && c >= b))
        return c;
    return 0;
}
/*
int main(){
    printf("mid %d\n", mx_mid(5, 6, 6));
    return 0;
}
*/

// #include <stdio.h>

int mx_max(int a, int b, int c){
    if (a >= b && a >= c)
        return a;
    if (b >= a && b >= c)
        return b;
    if (c >= a && c >= b)
        return c;
    return 0;
}
/*
int main(){
    printf("max: %d\n", mx_max(-1, 0, 1));
    return 0;
}
*/

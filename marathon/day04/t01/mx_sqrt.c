// #include <stdio.h>

int mx_sqrt(int x){
    if (x >= 1){
        for(int i = 1; i <= x; i++){
            if(i * i == x)
                return i;
        }
    }
    return 0;
}
/*
int main(){
    printf("res %d\n", mx_sqrt(0)); // 0
    printf("res %d\n", mx_sqrt(1)); // 1
    printf("res %d\n", mx_sqrt(2)); // 0
    printf("res %d\n", mx_sqrt(3)); // 0
    printf("res %d\n", mx_sqrt(4)); // 2
    printf("res %d\n", mx_sqrt(2147395600)); // 46340
    return 0;
}
*/

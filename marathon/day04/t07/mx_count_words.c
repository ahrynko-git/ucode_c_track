// #include <stdio.h>

int mx_count_words(const char *str, char delimiter){
    int counter = 0;
    int i = 0;
    if (str[0] == delimiter)
        i++;
    while(str[i]){
        if (str[i] == delimiter && str[i + 1] != '\0')
            counter++;
        i++;
    }
    if (i > 0)
        counter++;
    return counter;
}
/*
int main(){
    char *str = " follow * the white rabbit ";
    printf("%d\n", mx_count_words(str, '*')); // returns 2 
    printf("%d\n", mx_count_words(str, ' ')); // returns 5
    return 0;
}
*/

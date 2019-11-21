void mx_printchar(char c);

void mx_str_separate(const char *str, char delim){
    int i = 0;
    while(str[i]){
        if(str[i] != delim)
            mx_printchar(str[i]);
        else {
            if (str[i + 1] != delim)
                mx_printchar('\n');
        }
        i++;
    }
    mx_printchar('\n');
}
/*
int main(){
    mx_str_separate("game over", ' ');
    mx_str_separate("game over", 'm');
    mx_str_separate("MMMMatrix", 'M');
    return 0;
}
*/

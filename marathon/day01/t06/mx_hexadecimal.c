void mx_printchar(char c);

void mx_hexadecimal(void){
    for(int i = '0'; i <= 'F'; i++){
        if (i <= '9' || i >= 'A')
            mx_printchar(i);
    }
    mx_printchar('\n');
}
/*
int main(){
    mx_hexadecimal();
}
*/


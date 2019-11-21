int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);

static void print_int_to_bin(int n);

int main(int argc, char **argv){
    
    for (int i = 1; i < argc; i++)
        print_int_to_bin(mx_atoi(argv[i]));

    return 0;
}

static void print_int_to_bin(int n){
    /*
    int flag = 0;
    int arr[31];
    if (n < 0)
        flag = 1;
    for (int i = 0; i < 31; i++){
        if(n % 2 == 0){
            if (n == 0 && flag)
                arr[i] = 1;
            else
                arr[i] = 0;
        }
        else
            arr[i] = 1;
        n /= 2;
    }
    for(int i = 30; i >= 0; i--){
        mx_printint(arr[i]);
    }
    */
/*
    for (int i = 0; i < 32; i++){
        if(2147483648 & n)
            mx_printint(1);
        else
            mx_printint(0);
        n <<= 1;
    }
*/
    for (int i = 31; i >= 0; i--)
        ((n >> i) & 1) ? mx_printint(1) : mx_printint(0);
    mx_printchar('\n');
}


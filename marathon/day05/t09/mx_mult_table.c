int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);

static void print_table(int x, int y){
    
    for(int i = x; i <= y; i++){
        for(int j = x; j <= y; j++){
                mx_printint(i * j);
                if (j != y)
                    mx_printchar('\t');
        }
        mx_printchar('\n');
    }
}

int main(int argc, char **argv){

    if (argc == 3){

        int x = mx_atoi(argv[1]);
        int y = mx_atoi(argv[2]);

        if (x < y) 
            print_table(x, y);
        else
            print_table(y, x);
    }

    return 0;
}


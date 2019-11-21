void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);
void mx_printchar(char c);

int main(int argc, char **argv){

    while(mx_strchr(argv[0], '/'))
        argv[0]++;

    mx_printstr(argv[0]);
    mx_printchar('\n');

    return 0;    
}


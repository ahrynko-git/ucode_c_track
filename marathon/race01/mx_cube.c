void mx_printchar(char c);

void prntSpace(int x) 
{

    for (int j = 0; j < x; ++j) 
        mx_printchar(' ');
}

void prntline (int n)
{
    mx_printchar('+');

    for (int i = 0; i < 2 * n ; ++i) 
        mx_printchar('-');

    mx_printchar('+');
}

void diagonal(int n, int i)
{
    int space = n / 2 + 1 - i;

    prntSpace(space);
    mx_printchar('/');
    prntSpace(2 * n);
    mx_printchar('/');
    prntSpace(i - 1);
    mx_printchar('|');

}

void mx_cube(int n) 
{
    if (n > 1) 
    {
        int temp = n * 3 / 2 + 3;

        for (int i = 0; i < temp; ++i) 
        {
            if (i == 0) 
            {
                prntSpace(n / 2 + 1);
                prntline(n);
            }
            else if (i <= n / 2) 
                diagonal(n, i);
            else if ( i == n / 2 + 1) 
            {
                prntline(n);
                prntSpace(n / 2);
                mx_printchar('|');
            }
            else if (i <= n + 1) 
            {
                mx_printchar('|');
                prntSpace(n * 2);
                mx_printchar('|');
                prntSpace(n / 2);

                if (i == n + 1) 
                    mx_printchar('+');
                else 
                    mx_printchar('|');
            }
            else if (i < temp - 1) 
            {
                mx_printchar('|');
                prntSpace(n * 2);
                mx_printchar('|');
                prntSpace(temp - i - 2);
                mx_printchar('/');
            }
            else if ( i == temp - 1) 
                prntline(n);

            mx_printchar('\n');
        }
    }
}

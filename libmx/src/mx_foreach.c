// #include <unistd.h>

/*
void mx_printchar(char c)
{
    write(1, &c, 1);
}

void mx_printint(int n)
{
    if (n < 0)
    {
        mx_printchar('-');
        n *= -1;
    }
    
    if (n > 10)
        mx_printint(n / 10);
    mx_printchar(n % 10 + '0');
}
*/
void mx_foreach(int *arr, int size, void (*f)(int))
{
	for(int i = 0; i < size; i++)
		f(arr[i]);
}
/*
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	mx_foreach(arr, 5, mx_printint); //prints "12345" on the standart output
	return 0;
}
*/

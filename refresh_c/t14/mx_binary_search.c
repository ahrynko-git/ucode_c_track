// #include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) 
{
    int l = 0;
    int r = size - 1;
    int m;

    *count = 0;

    while(l <= r) 
    {
        m = l + (r - l) / 2;
        *count += 1;

        if(mx_strcmp(arr[m], s) > 0)
            r = m - 1;
        else if(mx_strcmp(arr[m], s) < 0)
            l = m + 1;
        else
            return m;
    }

    *count = 0;

    return -1;
}
/*
int main()
{
	char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};

	int count = 0;

	printf("%d\n", mx_binary_search(arr, 6, "ab", &count));   //returns 3 and count = 3
	printf("%d\n", count);
	count = 0;
	printf("%d\n", mx_binary_search(arr, 6, "aBc", &count));  //returns 2 and count = 1
	printf("%d\n", count);

	return 0;
}
*/

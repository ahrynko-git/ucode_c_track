// #include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size)
{
	int counter = 0;
	char *tmp;

	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size - 1; j++)
		{
			if (mx_strcmp(arr[j], arr[j + 1]) > 0)
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

				counter++;
			}
		}
	}

	return counter;
}
/*
int main()
{
	char *arr[] = {"abc", "xyz", "ghi", "def"};
	printf("%d\n", mx_bubble_sort(arr, 4)); //3

	return 0;
}
*/

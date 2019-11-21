int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size)
{
	char *tmp;
	int counter = 0;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i; j >= 0 && mx_strlen(arr[j]) > mx_strlen(arr[j + 1]); j--)
		{
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			counter++;
		}
	}

	return counter;
}

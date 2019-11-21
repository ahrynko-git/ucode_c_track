void mx_sort(int *arr, int size, bool (*f)(int, int)) {
	int temp;

	for (int i = 0; i < size - 1; i++) 
	{
		for (int g = 0; g < size - 1 - i; g++) 
		{
			if (f (arr[g], arr[g + 1])) 
			{
					temp = arr[g];
					arr[g] = arr[g + 1];
					arr[g + 1] = temp;
 			}
		}
	}
}

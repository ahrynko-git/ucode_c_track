#include <unistd.h>

#include <stdio.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size)
{
	int temp[src_size];
	int index = 0;

	for(int i = 0; i < src_size; i++)
	{
		temp[i] = -2147483648;
	}

	for (int i = 0; i < src_size; i++)
	{
		int current = src[i];
		int found = 0;

		for(int j = 0; found == 0 && j < src_size; j++)
		{
			if (current == temp[j])
				found = 1;
		}
		if (found == 0)
		{
			temp[index] = current;
			index++;
		}
	}
	*dst_size = index;

	return mx_copy_int_arr(temp, *dst_size);
}

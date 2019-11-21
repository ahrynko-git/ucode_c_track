int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count)
{
	int left = 0;
    int right = size - 1;
    int center;

    while (left <= right){
        center = (left + right) / 2;
        *count += 1;
        if (mx_strcmp(arr[center], s) > 0)
            right = center - 1;
        else if (mx_strcmp(arr[center], s) < 0)
            left = center + 1;
        else 
            return center;
    }
    return -1;
}

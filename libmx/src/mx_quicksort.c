#include "../inc/libmx.h"

static void swap(char **arr, int l, int r)
{
    char *tmp;

    tmp = arr[l];
    arr[l] = arr[r];
    arr[r] = tmp;
}

int mx_quicksort(char **arr, int left, int right)
{
    if(arr == NULL)
        return -1;

    int swaps = 0;
    int left_tmp = left;
    int right_tmp = right;
    int pivot = (left + right) / 2;

    while (left_tmp < right_tmp)
    {
        while(mx_strlen(arr[left_tmp]) < mx_strlen(arr[pivot]))
            left_tmp++;

        while(mx_strlen(arr[right_tmp]) > mx_strlen(arr[pivot]))
            right_tmp--;

        if(left_tmp <= right_tmp)
        {    
            swap(arr, left_tmp++, right_tmp--);
            swaps++;
        }
        
        if (left < right_tmp)
            mx_quicksort(arr, left, right_tmp);
        if (right > left_tmp)
            mx_quicksort(arr, left_tmp, right);
    }

    return swaps;
}
/*
int main()
{
    char *arr[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
    
    printf("%d\n", mx_quicksort(arr, 0, 3)); //returns 2

    return 0;
}
*/

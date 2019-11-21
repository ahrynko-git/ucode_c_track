/*
#include <stdio.h>

void print_arr(int *arr, int size)
{   
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
*/
void mx_sort_arr_int(int *arr, int size)
{
    // print_arr(arr, size);

    int tmp;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    // print_arr(arr, size);
}
/*
int main()
{
    int arr[7] = {3, 55, -11, 1, 0, 4, 22};
    mx_sort_arr_int(arr, 7);
    return 0;
}
*/

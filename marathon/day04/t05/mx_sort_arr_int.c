// #include <stdio.h>

void mx_sort_arr_int(int *arr, int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - 1; j++){
            int tmp;
            if (arr[j] > arr[j + 1]){
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    /*
    // print
    for (int i = 0; i < size; i++)
        printf("%d, ", arr[i]);
    */

}
/*
int main(){
    int arr[7] = {3, 55, -11, 1, 0, 4, 22};
    mx_sort_arr_int(arr, 7); //arr now is '{-11, 0, 1, 3, 4, 22, 55}'
    return 0;
}
*/

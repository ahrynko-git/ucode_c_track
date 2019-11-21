// #include <stdio.h>

int mx_popular_int(const int *arr, int size){
    int index_pop = 0;
    int rank_pop = 0;
    int rank_cur;

    for (int i = 0; i < size; i++){
        rank_cur = 0;
        for (int j = 0; j < size; j++){
            if (arr[i] == arr[j])
                rank_cur++;
        }
        if (rank_cur > rank_pop){
            rank_pop = rank_cur;
            index_pop = i;
        }
    }
    return arr[index_pop];
}
/*
int main(){
    int arr[] = {2, 2, 4, 4};
    printf("%d\n", mx_popular_int(arr, 4));
    return 0;
}
*/

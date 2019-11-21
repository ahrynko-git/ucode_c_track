#include "../inc/poker.h"

int mx_popular_int(int *arr, int size, int *b) {
int a[size];
int z=0;

    for (int i = 1; i < size; i++) {
        a[i] = 1;
        for (int j = i+1; j < size; j++){
            if (arr[i] == arr[j]&& arr[i] != 0) {
		 arr[j]	= 0;
                a[i] = a[i] + 1;
            }
        }
    }
    for (int i = 1; i < size; i++) {
        if (a[z] < a[i]) {          
            z = i;
        }
    }
    for (int i = 1; i < size; i++) {
	if (a[i] > *b && a[i]!=0 && a[i]!=a[z] )
		*b = a[i];
    }
    return a[z];
}

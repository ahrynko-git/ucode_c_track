#include "../inc/poker.h"

void mx_sort(int *arr) {
	int a;

    for(int i = 1; i < 5; i++) {
	    for (int j = 1; j < 5; j++) {
	        if (arr[j] > arr[j+1]) {
	            a = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = a;
            }
        }
     }
}

#include "../inc/poker.h"

void mx_duplicate(char **a, int b, int *c) {
	for (int i = 1; i < b; i++) {
		if (mx_strlen(a[b]) == 2) {
			if (a[i][0] == a[b][0] && a[i][1] == a[b][1]) {
				mx_printerr("Duplicate cards: ");
				mx_printerr(a[b]);
		mx_printerr("\n");
				*c = 0;  
			}
		}
		else if (mx_strlen(a[b]) == 3) {
			if (a[i][2] == a[b][2]) {
				mx_printerr("Duplicate cards: ");
                mx_printerr(a[b]);
		mx_printerr("\n");
                *c = 0;
			}
		}
	}
}

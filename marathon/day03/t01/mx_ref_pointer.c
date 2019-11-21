//#include <stdio.h>

void mx_ref_pointer(int i, int ******ptr){
    ******ptr = i;
}
/*
int main(){

    int *p1;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;

    mx_ref_pointer(6, p6);

    printf("%d\n", ******p6);

    return 0;
}
*/

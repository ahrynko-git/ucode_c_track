#include <stdio.h>

void race00(int map_length, int map_width, int one_y, int one_x);

int main() {

    int global = 0;
    
    race00(10, 10, 0, 0);
    race00(10, 10, 1, 1);
    race00(3, 11, 9, 9);
    race00(13, 13, 0, 0);

    return 0;
}

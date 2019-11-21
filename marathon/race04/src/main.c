#include "header.h"

void noPath() {
    mx_printstr("route not found");
    exit(1);
}

void findPath(char* massC, int *mass , int *x, int *y, int *size) {
        if ((*(mass + y[1] * size[1] + (x[1] - 1)) < 0) && (*(mass + y[1] * size[1] + (x[1] + 1)) < 0) 
        && (*(mass + (y[1] - 1) * size[1] + x[1])) && (*(mass + (y[1] + 1) * size[1] + x[1]) < 0)) {
           noPath();
        }
    else {
        int i= y[1];
        int j = x[1];
        int movement = 0;
        int flag = 0;
        if (*(massC + y[1] * size[1] + x[1]) == 'D') {
            flag = 1;
        }
        while (1) {
            movement++;
            if ((j > 0) && (*(mass + size[1] * i + (j - 1)) >= 0) && (*(mass + size[1] * i + (j - 1)) < *(mass + size[1] * i + j))) {
                *(massC + size[1] * i + j) = '*';
                j--;
            } 
            else if ((i > 0) && (*(mass + size[1] * (i - 1) + j) >= 0) && (*(mass + size[1] * (i - 1) + j) < *(mass + size[1] * i + j))) {
                *(massC + size[1] * i + j) = '*';
                i--;
            } 
            else if((i < size[0] - 1) && (*(mass + size[1] * (i + 1) + j) >= 0) && (*(mass + size[1] * (i + 1) + j) < *(mass + size[1] * i + j))) {
                *(massC + size[1] * i + j) = '*';
                i++;
            }
            else if((j < size[1] - 1) && (*(mass + size[1] * i + (j + 1)) >= 0) && (*(mass + size[1] * i + (j + 1)) < *(mass + size[1] * i + j))) {
                *(massC + size[1] * i + j) = '*';
                j++;
            }
            if((i == y[0])&&(j == x[0])) {
                //
                    *(massC + size[1] * i + j) = '*';
                break;
            }
            
            if (flag == 1) {
                *(massC + y[1] * size[1] + x[1]) = 'X';
            }
            //if (*(massC + [x1] * size[1] + y[1]) == 'D';
        }
        
        printf("exit = %d\n", movement);
    }
}
void setWeights( int *mass, int N, int M) {
        for(int k=0; k <N*M;k++) {
            for (int i=0; i < N; i++) {
                for (int j=0;j < M;j++) {

                    if (*(mass + M * i + j) >= 0) {
                        if((i > 0) && (*(mass + M * (i-1) + j) != -1)) {
                             if((*(mass + M * (i-1) + j) < 0) || (*(mass + M * (i-1) + j) > *(mass + M * i + j)))
                             *(mass + M * (i-1) + j) = *(mass + M * i + j) + 1;
                         }
                         if((i < N-1) && (*(mass + M * (i + 1) + j) != -1)) {
                             if((*(mass + M * (i+1) + j) < 0) || (*(mass + M * (i+1) + j) > *(mass + M * i + j)))
                             *(mass + M * (i+1) + j) = *(mass + M * i + j) + 1;
                         }
                         if(((j < M-1) && (*(mass + M * i + (j + 1)) != -1)))
                         {
                             if((*(mass + M * i + (j + 1)) < 0) || (*(mass + M * i + (j + 1)) > *(mass + M * i + j)))
                             *(mass + M * i + (j + 1)) = *(mass + M * i + j) + 1;
                         }
                         if((j > 0) && (*(mass + M * i + (j - 1)) != -1))
                         {
                             if((*(mass + M * i + (j - 1)) < 0) || (*(mass + M * i + (j - 1)) > *(mass + M * i + j)))
                             *(mass + M * i + (j - 1)) = *(mass + M * i + j)+ 1;
                         }
                  }
                }
            }
        }
}

void drawMaxDistance(char* massC, int *mass, int *size) {
    int maxValue = 0;
    for (int i = 0; i < size[0]; i++) {
        for (int j = 0; j < size[1]; j++) {
            if (*(mass + i * size[1] + j) > maxValue) {
                maxValue = *(mass + i * size[1] + j);
            }
        }
    }
    for (int i = 0; i < size[0]; i++) {
        for (int j = 0; j < size[1]; j++) {
            if (*(mass + i * size[1] + j) == maxValue) {
                *(massC + i * size[1] + j) = 'D';
            }
        }
    }
}


/*-10 */
void initMas(char* massC, int* mass, int *x, int *y, int* size) {
    int N = size[0];
    int M = size[1];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if(*(massC + i * M + j) == '#') { 
                *(mass + i * M + j) = -1;
            }
            if (*(massC + i * M + j) == '.') {
                *(mass + i * M + j) = -2;
            }
        }
    }
        *(massC + y[1] * M + x[1]) = 'T';
        *(mass + y[1] * M + x[1]) = -3; //Target
        *(mass + y[0] * M + x[0]) = 0; //Target
        //mass[i][j]
    /*for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) {
                    if (mass[i][j] == -10) {
                        mass[i][j] = 0;
                        break;
                    }
                }
            }*/
}

int main() {
    int N = 10;
    int M = 11;
    int x[2] = {1,8};
    int y[2] = {1,2};
    char massC[10][11] =    {"######.#...",
"#.#..#.####",
"#.#......##",
"#.#..######",
"#..#......#",
"#...#.##..#",
"#....#....#",
"#....#....#",
"#.........#",
"#########.#"};
   int mass[N*M];
    int size[2] = {N,M};

    initMas(&massC[0][0],&mass[0],x,y,size);
    for (int i=0; i < size[0]; i++) {
        for (int j=0;j < size[1];j++) {
            printf("%c ",massC[i][j]);
        }
        printf("\n");
    }
     printf("\n");
     for (int i=0; i < size[0]; i++) {
        for (int j=0;j < size[1];j++) {
            printf("%d ",*(mass + size[1] * i + j));
        }
        printf("\n");
    }

    setWeights( mass, N, M);
    printf("\n");
    printf("WEIGHTS:\n");
     for (int i=0; i < size[0]; i++) {
        for (int j=0;j < size[1];j++) {
            printf("%2d ",*(mass + size[1] * i + j));
        }
        printf("\n");
    }

    drawMaxDistance(&massC[0][0], mass, size);
    printf("\n");
    for (int i=0; i < N; i++) {
        for (int j=0;j < M;j++) {
            printf("%c ",massC[i][j]);
        }
        printf("\n");
    }
    findPath(&massC[0][0], mass , x, y, size);
    printf("\n");
    for (int i=0; i < N; i++) {
        for (int j=0;j < M;j++) {
            printf("%c ",massC[i][j]);
        }
        printf("\n");
    }
    //free(mass);
    //free(massC);
    return 0;
}

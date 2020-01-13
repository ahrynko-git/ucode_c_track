#include "pathfinder.h"

int **mx_get_matrix(int G, char *str, char **arr_islands) {
    int **matrix = mx_create_matrix(G, 0);
    char **strarr = mx_strsplit(str, '\n');

    for (int i = 0; strarr[i]; i++) {
        int mi = 0;
        int mj = 0;
        char **tmp = mx_pf_split(strarr[i]);
        
        for (int j = 0; j < G; j++) {
            if (mx_strcmp(arr_islands[j], tmp[0]) == 0)
                mi = j;
            if (mx_strcmp(arr_islands[j], tmp[1]) == 0)
                mj = j;
        }
        matrix[mi][mj] = mx_atoi(tmp[2]);
        matrix[mj][mi] = mx_atoi(tmp[2]);
        mx_del_strarr(&tmp);
    }
    mx_del_strarr(&strarr);
    return matrix;
}

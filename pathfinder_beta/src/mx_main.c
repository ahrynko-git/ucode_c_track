#include "pathfinder.h"

int main(int c, char *v[]) {
    mx_pf_errors(c, v);
    char *str = mx_file_to_str(v[1]);
    char **strarr = mx_strsplit(str, '\n');
    int G = mx_atoi(str);
    char **arr_islands = mx_get_arr_islands(G, strarr);
    int **matrix = mx_get_matrix(G, str, arr_islands);
    int **dex = mx_create_dex_matrix(matrix, G);
    t_all_paths *paths = mx_get_all_paths(dex, G);

    mx_printpaths(paths, matrix, arr_islands);
    mx_strdel(&str);
    mx_del_strarr(&strarr);
    mx_strdel(arr_islands);
    mx_del_matrix_int(matrix);
    mx_del_matrix_int(dex);
    // system("leaks -q pathfinder");
    return 0;
}

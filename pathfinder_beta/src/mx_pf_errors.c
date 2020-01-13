#include "pathfinder.h"

static void printerr_line(int i);
static void empty_lines(char *strarr);
static void INVLD_LINE_ASCII(char **strarr);
static void INVLD_LINE_INPUT(char **strarr);
static void INVLD_LINE1_DIGIT(char *strarr);
static void INVLD_FILE(int c, char *v[]);

void mx_pf_errors(int c, char *v[]) {
    INVLD_FILE(c, v);
    char *str = mx_file_to_str(v[1]);
    empty_lines(str);
    char **strarr = mx_strsplit(str, '\n');
    INVLD_LINE1_DIGIT(strarr[0]);
    INVLD_LINE_INPUT(strarr);
    INVLD_LINE_ASCII(strarr);
    mx_strdel(&str);
    mx_del_strarr(&strarr);
}

static void empty_lines(char *str) {
    int k = 0;

    for (int i = 0; i < mx_strlen(str) - 1; i++) {
        if (str[i] == '\n') {
            k++;
            if (str[i] == str[i + 1]) {
                printerr_line(k);
                exit(1);
            }
        }
    }
}

static void INVLD_FILE(int c, char *v[]) {
    if (c != 2) {
        mx_printerr("usage: ./pathfinder [filename]\n");
        exit(1);
    }
    int file = open(v[1], O_RDONLY);
    if (file < 0) {
        mx_printerr("error: file ");
        mx_printerr(v[1]);
        mx_printerr(" does not exist\n");
        exit(1);
    }
    char buf[1];
    int n = read(file, buf, sizeof(buf));
    if (n <= 0) {
        mx_printerr("error: file ");
        mx_printerr(v[1]);
        mx_printerr(" is empty\n");
        exit(1);
    }
    if (buf[0] == '\n') {
        printerr_line(0);
        exit(1);
    }
    close(file);
}

static void INVLD_LINE1_DIGIT(char *strarr) {
    for (int i = 1; i < mx_strlen(strarr); i++) {
        if (!mx_isdigit(strarr[i])) {
            mx_printerr("error: line 1 is not valid\n");
            exit(1);
        }
    }
}

static void INVLD_LINE_INPUT(char **strarr) {
    for (int i = 1; strarr[i]; i++) {
        int count_space = 0;
        int count_comma = 0;
        int get_char = 0;
        for (int j = 0; strarr[i][j] && count_space < 2; j++) {
            get_char = mx_get_char_index(&strarr[i][j], '-');
            if (get_char != -1) {
                count_space += 1;
                j += get_char;
            }
            else break;
        }
        for (int j = 0; strarr[i][j] && count_comma < 2; j++) {
            get_char = mx_get_char_index(&strarr[i][j], ',');
            if (get_char != -1) {
                count_comma += 1;
                j += get_char;
            }
            else break;
        }
        if (count_comma != 1 || count_space != 1) {
            printerr_line(i);
            exit(1);
        }
    }
}

static void INVLD_LINE_ASCII(char **strarr) {
    char **tmp = NULL;
    for (int i = 1; strarr[i]; i++) {
        tmp = mx_pf_split(strarr[i]);
        if (tmp[0][0] == '\0' || tmp[1][0] == '\0' || tmp[2][0] == '\0')
            printerr_line(i);
        for (int j = 0; j < mx_strlen(tmp[0]); j++) {
            if (!mx_isalpha(tmp[0][j])) {
                printerr_line(i);
            }
        }
        for (int j = 0; j < mx_strlen(tmp[1]); j++) {
            if (!mx_isalpha(tmp[1][j])) {
                printerr_line(i);
            }
        }
        for (int j = 0; j < mx_strlen(tmp[2]); j++) {
            if (!mx_isdigit(tmp[2][j])) {
                printerr_line(i);
            }
        }
        mx_del_strarr(&tmp);
    }
}

static void printerr_line(int i) {
    mx_printerr("error: line ");
    mx_printerr(mx_itoa(i + 1));
    mx_printerr(" is not valid\n");
    exit(1);
}

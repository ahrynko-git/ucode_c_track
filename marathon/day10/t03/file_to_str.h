#ifndef file_to_str_h
#define file_to_str_h
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strjoin(const char *s1, const char *s2);
char *mx_strdup(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strcat(char *s1, const char *s2);
char *mx_file_to_str(const char *filename);
#endif
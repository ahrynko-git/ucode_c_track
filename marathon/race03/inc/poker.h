#pragma once

#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdbool.h>


bool mx_iffaces(char s);
void mx_invalidcard(char *card,int *a);
void mx_duplicate(char **a, int b, int *c);
int mx_miscalculation(char **a);
void mx_charint (char **a,int *b);
bool mx_ifsuits(char s);
void mx_printer(char c);
int mx_popular_int(int *arr, int size, int *b);
void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_sort(int *arr);
void mx_printerr(const char *s);
void mx_printstr(const char *s);



#endif

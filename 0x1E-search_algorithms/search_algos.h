#ifndef SEARCH_H
#define SEARCH_H
# include <stdio.h>
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
#endif


#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
void print_arr(int *array, size_t position, size_t size);

#endif /* _SEARCH_ALGOS_ */

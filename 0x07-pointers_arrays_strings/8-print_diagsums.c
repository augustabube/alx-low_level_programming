#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - printst diagonals of an array
 * @a: pointer to multidimentional array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j, dg1 = 0, dg2 = 0;

	for (i = 0; i < size * size; i += (size + 1))
		dg1 += a[i];
	for (j = (size - 1); j < (size * size) - (size - 1); j += (size - 1))
			dg2 += a[j];
	printf("%d, %d\n", dg1, dg2);
}

#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: First param to be swapped
 * @b: Second param to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

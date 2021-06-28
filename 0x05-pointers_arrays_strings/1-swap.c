#include "holberton.h"

/**
 * swap_int - swaps the value between int a and b
 * @a: 1st integrer
 * @b:2nd integrer
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

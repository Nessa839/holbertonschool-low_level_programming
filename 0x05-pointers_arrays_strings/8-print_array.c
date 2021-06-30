#include "holberton.h"
#include <stdio.h>


/**
 * print_array -  prints array's elements
 * @n: elements
 * @a: array
 */


void print_array(int *a, int n)
{
	int elem;

	for (elem = 0; elem < n; elem++)
	{
		printf("%d", a[elem]);

		if (elem == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}

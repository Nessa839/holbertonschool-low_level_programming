#include "holberton.h"
#include <stdio.h>


/**
 * print_array -  prints array's elements
 * @n: elements
 * @a: array
 */


void print_array(int *a, int n)
{
	int elem = 0;

	while (elem <= n)
	{
		printf("%d", a[elem]);

		if (elem <= (n - 1))

			printf(", ");

		elem++;

	}

	printf("\n");
}


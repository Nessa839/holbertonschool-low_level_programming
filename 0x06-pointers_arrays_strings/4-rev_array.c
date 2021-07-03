#include "holberton.h"
/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: lenght
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0, j;

	n = n - 1;
	while (i < n)
	{
		j = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = j;
		i++;
		n--;
	}
}

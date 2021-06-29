#include "holberton.h"


/**
 * rev_string - reverses a string
 * @s: the string
 */



void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char swap;

	while (*(s + i))
	{

		i++;
	}


	i = i - 1;
	while (i >= 0)
	{
		if (j > i)
			break;
		swap = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = swap;
			j++;
		i--;
	}
}

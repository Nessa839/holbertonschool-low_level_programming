#include "holberton.h"
/**
 * string_toupper - changes lowercase  to uppercase
 * @str: string to change
 * Return: result
 */

char *string_toupper(char *str)

{
	int i = 0;



	if (str == 0)
		return (0);

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] -= 32;
		}
	}

	return (str);

}

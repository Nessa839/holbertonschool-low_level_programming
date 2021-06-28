#include "holberton.h"
/**
 * _strlen - Returns the length of a string.
 * @s: the string which length is returned.
 * Return: length of the string.
 */


int _strlen(char *s)
{
	int length = 0;

	while (*(s + length))
		length++;
	return (length);
}

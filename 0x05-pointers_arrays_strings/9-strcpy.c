#include "holberton.h"



/**
 * _strcpy - copies a string with the null byte to dest
 * @dest: destination
 * @src: string
 * Return: pointer to dest
 */



char *_strcpy(char *dest, char *src)
{
	int copy = 0;

	while (*(src + copy))
	{
		*(dest + copy) = *(src + copy);
		copy++;
	}
	*(dest + copy) = '\0';
	return (dest);
}

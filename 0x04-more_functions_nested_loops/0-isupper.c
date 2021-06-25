#include "holberton.h"
#include <stdio.h>

/**
 * main - checks for uppercase char
 * @c: character
 * Return: either 1 or 0
 */


int _isupper(int c)

{
if (c >= 'A' && c <= 'Z')
return (1);

else
return (0);
}
 

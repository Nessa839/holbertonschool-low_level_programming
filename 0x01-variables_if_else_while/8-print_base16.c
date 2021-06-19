#include <stdio.h>

/**
* main - shows numbers from 1 to f
* Return: goes back to zero.
*/
int main(void)
{
int number = 48;
int letter = 97;
while (number <= 57)
{
putchar(number);
number++;
}
while (letter <= 102)
{
putchar(letter);
letter++;
}
putchar(10);
return (0);
}

#include <stdio.h>

/**
* main - shows numbers from 1 to f
* Return: goes back to zero.
*/
int main(void)
{
int number = 48;
int letter = 65;
while (number <= 57)
{
putchar(number);
number++;
}
while (letter <= 70)
{
putchar(letter);
letter++;
}
putchar(10);
return (0);
}

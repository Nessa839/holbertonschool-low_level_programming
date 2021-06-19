#include <stdio.h>

/**
* main - adds a comma and a space
* Return: goes back to zero.
*/

int main(void)
{
int number = 48;
int comma = 44;
int space = 32;

while (number <= 57)
{
putchar(number);
if (number != 57)
{
putchar(comma);
putchar(space);
}
number++;
}

return (0);
}

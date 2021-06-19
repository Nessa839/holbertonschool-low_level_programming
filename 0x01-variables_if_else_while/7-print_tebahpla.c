#include <stdio.h>

/**
* main - shows the alphabet in reverse.
* Return: goes back to zero.
*/
int main(void)
{
int alphabet = 122;
while (alphabet >= 97)
{
putchar(alphabet);
alphabet--;
}
putchar(10);
return (0);
}

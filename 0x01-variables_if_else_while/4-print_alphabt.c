#include <stdio.h>

/**
 * main - Shows the alphabet without e and q
 * Return:goes back to zero
 */

int main(void)
{

int alphabet = 97;
while (alphabet <= 122)
{
if (alphabet != 101  && alphabet != 113)
{
putchar(alphabet);
}
alphabet++;
}
putchar(10);
return (0);

}

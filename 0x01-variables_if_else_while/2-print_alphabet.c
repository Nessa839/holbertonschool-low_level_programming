#include <stdio.h>

/**
* main - prints alphabet
* Return:goes back to zero
*/


int main(void)

{
int letter = 97;
int letterm =  65;
while (letter < 123)

{
putchar(letter);
letter++;
}

putchar(32);

while (letterm < 90)
{
putchar(letterm);
letter++;
}

return (0);
}

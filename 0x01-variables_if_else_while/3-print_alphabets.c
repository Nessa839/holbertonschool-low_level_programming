#include <stdio.h>

/**
* main - prints alphabet
* Return:goes back to zero
*/


int main(void)

{
int letter = 97;
int letterm =  65;
while (letter <= 122)

{
putchar(letter);
letter++;
}


while (letterm <= 90)
{

putchar(letterm);
letterm++;
}

putchar(10);

return (0);
}

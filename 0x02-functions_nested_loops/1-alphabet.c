#include "main.h"

/**
* print_alphabet -  print the lower case letters.
*
*
* Return: Always 0.
*/
void print_alphabet(void)
{
char smallLetters = 'a';
while (smallLetters <= 'z')
{
_putchar(smallLetters);
smallLetters++;
}
_putchar('\n');
}

#include "main.h"

/**
* print_alphabet_x10 -print the alphabet 10 times.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int i;
for (i = 0; i <= 9; i++)
{
char lowercaseletters = 'a';
while (lowercaseletters <= 'z')
{
_putchar(lowercaseletters);
lowercaseletters++;
}
_putchar('\n');
}
}

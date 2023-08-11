#include <stdio.h>
/**
* main - the start of the program main function
*
* Return: Always return zero
*
* betty style doc for function main goes there
*/

int main(void)
{
char lowerLetter = 'a';
while (lowerLetter >= 'z')
{
putchar(lowerLetter);
lowerLetter--;
}
putchar('\n');
return (0);
}

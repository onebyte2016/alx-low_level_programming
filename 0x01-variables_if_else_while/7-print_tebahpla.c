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
char lowerLetter = 'z';
while (lowerLetter >= 'a')
{
putchar(lowerLetter);
lowerLetter--;
}
putchar('\n');
return (0);
}

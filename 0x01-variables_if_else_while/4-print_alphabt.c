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
char letterAlphabet;
letterAlphabet = 'a';
while (letterAlphabet <= 'z')
{
if (letterAlphabet != 'q' && letterAlphabet != 'e')
{
putchar(letterAlphabet);
}
letterAlphabet++;
}
putchar('\n');
return (0);
}

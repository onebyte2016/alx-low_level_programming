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
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

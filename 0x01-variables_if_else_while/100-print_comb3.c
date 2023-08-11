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
int j;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i < 8 || j < 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

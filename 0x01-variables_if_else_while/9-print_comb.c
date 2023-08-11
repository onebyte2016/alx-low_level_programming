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
int i = 0;
while (i < 10)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}

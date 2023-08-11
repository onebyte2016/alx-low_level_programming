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
int a;
int b;
for (a = 0; a <= 99; a++)
{
for (b = 0; b <= 99; b++)
{
if (a <= b)
{
if (a < 10)
{
putchar('0');
}
printf("%d", a);
putchar(' ');
if (b < 10)
{
putchar('0');
}
printf("%d", b);
if (a < 99 ||  b < 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

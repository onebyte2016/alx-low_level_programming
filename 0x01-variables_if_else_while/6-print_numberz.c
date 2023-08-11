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
int a = 0;
while (a <= 9)
{
putchar(a + '0');
a++;
}
putchar('\n');
return (0);
}

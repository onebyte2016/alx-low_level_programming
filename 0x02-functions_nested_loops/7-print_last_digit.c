#include "main.h"

/**
* print_last_digit  - print the last digit of number.
*
* @n: parameter of the function
*
* Return: Always 0.
*/
int print_last_digit(int n)
{
int lastDigit;
if (n < 0)
lastDigit = -1 * (n % 10);
else
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}

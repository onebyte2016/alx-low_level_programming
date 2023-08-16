#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
int sum, num;
for (num = 0; num < 1024; num++)
{
if ((num % 3 == 0) || (num % 5 == 0))
sum += sum;

}
printf("%d\n", sum);
return (0);
}

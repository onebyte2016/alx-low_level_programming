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
char lowercaseletter = 'a';
char uppercaseletter = 'A';

while (lowercaseletter <= 'z')
{
putchar(lowercaseletter);
lowercaseletter++;
}
while (uppercaseletter <= 'Z')
{
putchar(uppercaseletter);
uppercaseletter++;
}
putchar('\n');
return (0);
}

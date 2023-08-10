#include <stdio.h>
/**
 * main - the begining of the main function
 *
 * Return: always 0
 */
int main(void)
{
int i;
char c;
float f;

printf("Size of a char: %lu.\n byte(s)", sizeof(c));
printf("Size of an int: %lu.\n byte(s)", sizeof(i));
printf("Size of long int: %lu.\n byte(s)", sizeof(i));
printf("Size of long long int: %lu.\n byte(s)", sizeof(i));
printf("Size of a float: %lu.\n byte(s)", sizeof(f));
return (0);
}

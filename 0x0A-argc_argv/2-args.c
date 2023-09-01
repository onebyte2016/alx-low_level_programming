#include <stdio.h>
/**
 * main - entry point of the program
 * @argc: first argument
 * @argv: second argument
 *
 * Return: Always 0
 */



int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);


}

#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function to concantenate string
 * @s1: first parameter
 *
 * @s2: second parameter
 *
 * Return: dest
 */



int _strcmp(char *s1, char *s2)
{
   int equal = 0;

while (*s1)
{
  if (*s1 != *s2)

{
  equal = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (equal);
}

#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>
/**
* struct token - token
* @token: format token
* @f: function associate
*/

typedef struct token
{
  char *token;
void (*f)(char *, va_list);
} token_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void print_all(const char * const format, ...);
#endif

#ifndef MAIN
#define MAIN

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
void _putchar(char c);
int _find_type(char c, va_list arg);
int _print_char(va_list arg);
int _print_int(va_list arg);
int _print_int_reverse(int n, int b);
int _print_str(va_list arg);
int _print_null(void);

/**
 * struct formats - Struct dog
 *
 * @t: first letter of the type
 * @f: function execute per type
 */
typedef struct formats
{
	char *t;
	int (*f)(va_list p);
} formats;

#endif

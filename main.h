#ifndef MAIN
#define MAIN

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _find_type(char c, va_list arg);
int _print_char(va_list arg);
int _print_int(va_list arg);
int _print_str(va_list arg);
int _print_null(void);
void parse_int(long int n, long int r, long int mul, long int *m);
int int_size(long int n);
int _print_float(va_list arg);

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

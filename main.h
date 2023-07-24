#ifndef MAIN
#define MAIN

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);

int (*get_operator(char operator))(va_list);

int _print_char(va_list arg);

int _string_process(va_list arg);
int _print_str(char *c);


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

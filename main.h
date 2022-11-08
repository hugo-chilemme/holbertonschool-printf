#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
void _putchar(char c);
void _get_type(char c, va_list arg);
void _print_char(va_list arg);
void _print_int(va_list arg);
void _print_str(va_list arg);

/**
 * struct formats - Struct dog
 *
 * @t: first letter of the type
 * @f: function execute per type
 */
typedef struct formats
{
	char *t;
	void (*f)(va_list p);
} formats;

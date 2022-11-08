#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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

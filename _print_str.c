#include "main.h"

/**
* _print_str - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/

int _print_str(va_list arg)
{
	int len = 0;
	char *s = va_arg(arg, char*);

	if (s == NULL)
		return (_print_null());


	while (*s != '\0')
	{
		len++;
		_putchar(*s++);
	}
	return (len);
}

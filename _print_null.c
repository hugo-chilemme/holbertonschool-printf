#include "main.h"

/**
* _print_null - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
*/

int _print_null(void)
{
	char *s = "(null)";
	int len = 0;

	while (*s != '\0')
	{
		len++;
		_putchar(*s++);
	}
	return (len);
}

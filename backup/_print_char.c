#include "main.h"

/**
* _print_char - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @arg: va_list parmameter
*/

/*Fonction qui écrit un character*/
int _print_char(va_list arg)
{
	return (_putchar((char) va_arg(arg, int)));
}

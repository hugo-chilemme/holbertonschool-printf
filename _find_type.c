#include "main.h"

/**
 * _find_type - check the code
 * @c: char
 * @arg: va_list
 * Return: Always 0.
 */
/*Fonction qui cherche le format correct*/
int _find_type(char c, va_list arg)
{
	/*Liste des formats*/
	formats list[] = {
		{"i", _print_int},
		{"d", _print_decimal},
		{"c", _print_char},
		{"s", _print_str},
		{NULL, NULL}
	};

	int len = 1;
	int index = 0;
	int slength = 0;
	/*Donne la taille de la liste*/
	for (; list[slength].t; slength++)
		;

	/*Cherche le bon format*/
	while (index < slength)
	{
		if (*list[index].t == c)
			return (list[index].f(arg));
		index++;
	}
	/*si c'est un double % envoie char*/
	if (c != '%')
		len += _putchar('%');
	_putchar(c);
	return (len);
}

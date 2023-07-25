#include "main.h"

/**
 * get_operator - check the code
 * @operator: char
 * Return: Always good function or null.
 */
int (*get_operator(char operator))(va_list)
{
	int sf;
	formats ops[] = {
		{"c", _print_char},
		{"s", _string_process},
		{"d", _print_decimal},
		{"i", _print_decimal},
		{NULL, NULL}
	};

	sf = 0;
	while (operator && ops[sf].t)
	{
		if (*ops[sf].t == operator)
			return (ops[sf].f);
		sf += 1;
	}
	return (NULL);
}

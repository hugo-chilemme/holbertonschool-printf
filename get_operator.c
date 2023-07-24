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
		{"s", _print_str},
		{NULL, NULL}
	};

	if (!operator)
		return (NULL);

	sf = 0;
	while (ops[sf].t)
	{
		if (*ops[sf].t == operator)
			return (ops[sf].f);
		sf += 1;
	}
	return (NULL);
}

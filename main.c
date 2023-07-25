#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("%d \n", 2147483647);
	len2 = printf("%d \n", 2147483647);
	
	printf("%i / %i\n", len, len2);

	return (0);
}

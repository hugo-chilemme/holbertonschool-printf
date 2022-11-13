#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	len = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	len2 = printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	
	fflush(stdout);
	printf("\nmain_19.c: ");
	if (len != len2)
	{
		printf("Lengths differ. %i / %i\n", len, len2);
		fflush(stdout);
		return (1);
	}
	printf("Successfully.\n");
	return (0);
}

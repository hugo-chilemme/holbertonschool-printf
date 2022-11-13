#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	printf("main_14.c: Testing...\n\n");
	len = _printf("%i\n", INT_MIN);
	len2 = printf("%i\n", INT_MIN);
	fflush(stdout);
	printf("\nmain_14.c: ");
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	printf("Successfully.\n");
	return (0);
}

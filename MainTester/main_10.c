#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	printf("main_10.c: Testing...\n\n");
	len = _printf("%i\n", 1024);
	len2 = printf("%i\n", 1024);
	fflush(stdout);
	printf("\nmain_10.c: ");
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	printf("Successfully.\n");
	return (0);
}

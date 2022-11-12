#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	printf("main_17.c: Testing...\n\n");
	len = _printf("There is %i bytes in %i KB\n", 1024, 1);
	len2 = printf("There is %i bytes in %i KB\n", 1024, 1);
	fflush(stdout);
	printf("\nmain_17.c: ");
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	printf("Successfully.\n");
	return (0);
}

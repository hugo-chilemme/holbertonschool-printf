#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	long int l = INT_MAX;

	l += 1024;
	printf("main_4.c: Testing...\n\n");
	len = _printf("%d\n", l);
	len2 = printf("%d\n", l);
	printf("\nmain_4.c: ");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.%i %i %i\n", len, len2, INT_MIN);
		fflush(stdout);
		return (1);
	}
	printf("Successfully\n");
	return (0);
}

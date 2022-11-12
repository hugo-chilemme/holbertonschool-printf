#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	long int l = INT_MIN;
	printf("main_16.c: Testing...\n\n");
	l -= 1024;
	len = _printf("%i\n", l);
	len2 = printf("%i\n", l);
	fflush(stdout);
	printf("\nmain_16.c: ");
	if (len != len2)
	{
		printf("Lengths differ. %i / %i\n", len, len2);
		fflush(stdout);
		return (1);
	}
	printf("Successfully.\n");
	return (0);
}

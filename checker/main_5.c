#include "../main.h"

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
	len = _printf("%d\n", l);
	len2 = printf("%d\n", l);
	printf("\nmain_5.c: ");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.%i / %i \n", len, len2);
		fflush(stdout);
		return (1);
	}
	printf("Successfully.\n");
	return (0);
}

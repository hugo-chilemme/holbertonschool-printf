#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	printf("main_3.c: Testing...\n\n");
	len = _printf("%d\n", INT_MAX);
	len2 = printf("%d\n", INT_MAX);
	fflush(stdout);

	printf("\nmain_3.c: ");
	if (len != len2)
	{
		printf("Lengths differ. %i %i\n", len, len2);
		fflush(stdout);
		return (1);
	}
	printf("Successfully.\n");
	return (0);
}

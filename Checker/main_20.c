#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	len = _printf("%d == %i\n", 1024, 1024);
	len2 = printf("%d == %i\n", 1024, 1024);

	fflush(stdout);
	printf("\n\nmain_20.c: ");
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	printf("Successfully.\n");
	return (0);
}

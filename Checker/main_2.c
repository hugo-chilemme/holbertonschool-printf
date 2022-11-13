#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	len = _printf("%d\n", 0);
	len2 = printf("%d\n", 0);

	printf("\nmain_2.c: ");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ %i / %i.\n", len, len2);
		fflush(stdout);
		return (1);
	}
	printf("Successfully.\n");
	return (0);
}

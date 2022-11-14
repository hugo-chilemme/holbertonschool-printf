#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%b", UINT_MAX);
	len2 = printf("11111111111111111111111111111111");
    printf("\nmain_46.c: ");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
    printf("Successfully.");
	return (0);
}
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	long int l = UINT_MAX;

	l += 1024;
	len = _printf("%b", l);
	len2 = printf("1111111111");

    printf("\nmain_47.c: ");
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
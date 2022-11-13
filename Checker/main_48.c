#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("There is %b bytes in %b KB\n", 1024, 1);
	len2 = printf("There is 10000000000 bytes in 1 KB\n");
    printf("\nmain_48.c: ");
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
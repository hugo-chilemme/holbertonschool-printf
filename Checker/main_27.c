#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	len2 = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	fflush(stdout);
	printf("\nmain_27.c: ");
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	printf("Successfully.\n");
	return (0);
}

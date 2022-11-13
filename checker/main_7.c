#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	len = _printf("There is %d bytes in %d KB\n", 1024, 1);
	len2 = printf("There is %d bytes in %d KB\n", 1024, 1);

	printf("\nmain_7.c: ");
	fflush(stdout);
	if (len != len2)
	{
		printf("Length differ : %i / %i", len, len2);
		fflush(stdout);
		return (1);
	} 
	printf("Successfully.\n");		
	return (0);
}

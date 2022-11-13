#include "../main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("css%ccs%scscscs", 'T', "Test");
	len2 = printf("css%ccs%scscscs", 'T', "Test");
	fflush(stdout);
	
	printf("\nmain_35.c: ");
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	printf("Successfully.\n");
	return (0);
}

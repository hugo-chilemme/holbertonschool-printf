#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
	
    len = _printf("That a %s", "test.");
    len2 = printf("That a %s", "test.");

    printf("%i/%i", len, len2);
    return (0);
}

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

    len = _printf("%%\n");
    len2 = printf("%%\n");

    printf("%i / %i", len, len2);
    return (0);
}
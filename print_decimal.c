#include "main.h"


int _print_last_number(int n, int r, int mul) 
{
    int f = (n / mul) % 10;
    int s = 0; 

    r -= f * mul;
    mul *= 10;

    if (r != 0)
    {
        s += _print_last_number(n, r, mul);
    }
    s += _putchar('0' + f);
    return (s);
}


int _print_decimal(va_list arg)
{
    int n = va_arg(arg, int);
    int size = 0;
    int r;
    
    if (n < 0) {
        _putchar('-');
        n += 1;
        n = n * -1;
        r = (n % 10) + 1;
        n = n / 10;
        size += 2;
    }
    size += _print_last_number(n, n, 1);

    if (r)
        _putchar('0' + r);
    return (size);
}
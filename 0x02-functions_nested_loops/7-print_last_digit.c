#include "main.h"
/**
 * print_last_digit - print the last digit of the number.
 * @n: int value.
 * Return: the last digit.
 */
int print_last_digit(int n)
{
int i;
{
if (n < 0)
{
i = -1 * (n % 10);
_putchar(i + '0');
return (i);
}
else
i = n % 10;
_putchar(i + '0');
return (i);
}
}

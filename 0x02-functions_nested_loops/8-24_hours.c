#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
int x = 0;
int a = 0, b = 0, c = 0, d = 0;
while (x <= 1440)
{
while (a <= 2)
{
_putchar('a');
a++;
}
while (b <= 9)
{
_putchar('b');
b++;
}
_putchar(':');
while (c <= 5)
{
_putchar('c');
c++;
}
while (d <= 9)
{
_putchar('d');
d++;
}
_putchar('\n');
}
x++;
}

#include <stdio.h>
/**
 * main - write the alphabet from z to a.
 *
 * Return: 0 on success
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}

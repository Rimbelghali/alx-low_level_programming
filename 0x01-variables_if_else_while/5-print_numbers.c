#include <stdio.h>
/**
*main – Prints the numbers from 0-9.
*
*Return: 0 on success
*/
int main(void)
{
char x = '0';
while (x <= '9')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}

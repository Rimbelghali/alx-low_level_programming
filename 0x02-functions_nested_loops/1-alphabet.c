#include "main.h"
#include <stdio.h>
/**
* print_alphabet: Print the alphabet from a to z
* Return: Always 0 on success
*/
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}

#include "main.h"
/**
* print_alphabet_x10 - Print 10 times the alphabet, in lowercase using '_putchar' only twice
* Return : 0 (Always)
*/
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}

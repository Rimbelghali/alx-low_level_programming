#include <stdio.h>
#include "main.h"
/**
* main - alphabet
* print_alphabet - Print the alphabet
* Return: 0 on success
*/
void main(void)
{char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}

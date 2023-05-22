#include "main.h"
#include <stdio.h>
/**
* main - alphabet
* print_alphabet - Print the alphabet
* Return: Always 0 on success
*/
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
* main - alphabet
* print_alphabet - Print the alphabet
* Return: 0 on success
*/
int main(void)
{char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}

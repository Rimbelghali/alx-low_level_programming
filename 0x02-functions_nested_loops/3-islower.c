#include "main.h"
/**
* _islower - checks for lowercase character.
* @c: char type letter
* Return: 1 if lowercase, if not 0.
*/
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}

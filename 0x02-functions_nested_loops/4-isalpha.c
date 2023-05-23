#include "main.h"
/**
 * _isalpha - Return 1 if letter , 0 if not.
 * @c: type int letter
 * Return: 1 if lowercase or uppercase, 0 if not letter
 */
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
return (1);
else
return (0);
}

#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character.
 * @c: variable to be checked
 * Return: 1 for uppercase, 0 otherwise
 */

int _isupper(int c)
{
if (isupper(c))
return (1);
return (0);
}

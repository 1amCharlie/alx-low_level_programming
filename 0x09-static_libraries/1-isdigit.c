#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @num: variable to be checked
 *
 * Return: 1 for digit, else 0
 */
int _isdigit(int num)
{
if (isdigit(num))
return (1);
return (0);
}

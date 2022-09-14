#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: input to be checked
 *Return: the last digit
 */

int print_last_digit(int x)
{
int result;

if (x < 0)
result = -1 * (x % 10);
else
result = x % 10;

_putchar ((result) +'0');

return (result);
}

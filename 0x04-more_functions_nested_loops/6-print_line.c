#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer variable
 *
 */

void print_line(int n)
{
if (n < 1)
_putchar('\n');
else
{
while (n--)
_putchar('_');
_putchar('\n');
}
}

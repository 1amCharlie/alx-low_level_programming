#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: void
 */

void print_most_numbers(void)
{
int var = 0;

do {
if (var == 4 || var == 2)
{
var++;
continue;
}
else
_putchar(var + '0');
var++;
} while (var < 10);

_putchar('\n');
}

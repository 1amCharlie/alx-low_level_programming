#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: void
 */

void print_numbers(void)
{
int ii = 0;

do {
_putchar(ii + '0');
ii++;
} while (ii < 10);

_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
int ii = 0;

while (ii < 10)
{
int alp;

for (alp = 'a'; alp <= 'z'; alp++)
_putchar(alp);
_putchar('\n');

ii++;
}
}

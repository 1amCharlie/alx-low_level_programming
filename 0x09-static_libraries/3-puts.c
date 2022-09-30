#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string to stdout
 * @strng: points to string to print
 * Return: Always 0
 */
void _puts(char *strng)
{
int i = 0;
while (strng[i])
{
putchar(strng[i]);
i++;
}
putchar('\n');
}

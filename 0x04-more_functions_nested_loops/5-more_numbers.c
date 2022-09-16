#include "main.h"

/**
 * print - print variable recursively
 * @num: var
 */
void print(int num)
{
if (num < 0)
{
_putchar('-');
num = -num;
}
if (num / 10)
print(num / 10);
_putchar(num % 10 + '0');
}

/**
 * more_numbers - print more numbers up to 14
 *
 */

void more_numbers(void)
{
int jj = 0;

while (jj < 10)
{
int ii = 0;

do {
if (ii < 10)
print(ii);
else
{
print(ii);
}

ii++;
} while (ii < 15);
jj++;
_putchar('\n');
}
}

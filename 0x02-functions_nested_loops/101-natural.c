#include <stdio.h>

/**
 *main - prints the sum of all the multiples of 3 or 5
 *below 1024 (excluded), followed by a new line
 *Return: Always 0
 */

int main(void)
{
int ii, _sum;

for (ii = 3; ii < 1024; ii++)
{
if (ii % 3 == 0 || ii % 5 == 0)
_sum += ii;
}
printf("%d\n", _sum);
return (0);
}

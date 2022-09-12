#include <stdio.h>

/**
 *main - Entry Point
 *
 *Description: Write a program that prints the
 *alphabet in lowercase, followed by a new line.
 *
 *Return: 0
 */

int main(void)
{
int lw = 'a';
while (lw <= 'z')
{
if (lw == 'e' || lw == 'q')
{
lw += 1;
}
else
{
putchar(lw);
lw += 1;
}
}
putchar('\n');
return (0);
}

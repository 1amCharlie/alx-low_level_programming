#include <stdio.h>

/**
 * main - Entry Point
 *Description: Write a program that prints the lowercase
 *alphabet in reverse, followed by a new line.
 * Return: 0
 */

int main(void)
{
int n = 122;
while (n > 96)
{
putchar(n);
n -= 1;
}
putchar('\n');
return (0);
}

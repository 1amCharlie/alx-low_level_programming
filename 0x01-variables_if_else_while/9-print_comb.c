#include <stdio.h>

/**
 * main -  Entry Point
 *Description: Write a program that prints all possible
 *combinations of single-digit numbers.
 * Return: 0
 */

int main(void)
{
int n = 48;
int com = 44;
while (n <= 57)
{
putchar(n);
if (n != 57)
{
putchar(com);
putchar(32);
}
n += 1;
}
putchar('\n');
return (0);
}
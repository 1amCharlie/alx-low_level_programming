#include <stdio.h>

/**
 *main - Entry Point
 *
 *Description: Write a program that prints all single
 *digit numbers of base 10 starting from 0, followed by a new line.
 *
 *Return: 0
 */

int main(void)
{
int n;
while (n < 10)
{
printf("%d", n);
n += 1;
}
printf("\n");
return (0);
}

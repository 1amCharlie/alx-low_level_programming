#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry Point
 *Description: Write a program that prints the
 *alphabet in lowercase, followed by a new line.
 *Return: 0
 */

int main(void)
{
int l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar('\n');
return (0);
}

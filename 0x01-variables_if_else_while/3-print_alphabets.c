#include <stdio.h>

/**
 *main - Entry Point
 *Description:Write a program that prints the alphabet
 *in lowercase, and then in uppercase, followed by a new line.
 *Return: 0
 */

int main(void)
{
int lw = 'a';
int up = 'A';
while (lw <= 'z')
{
putchar(lw);
lw += 1;
}
while (up <= 'Z')
{
putchar(up);
up += 1;
}
putchar('\n');
return (0);
}

#include "main.h"
/**
 *main - Entry point
 *Description: we will print _putchar by means of
 *looping through a string
 *Return: 0 Always success
 */
int main(void)
{
char i[] = "_putchar";
int c;
for (c = 0; c < 8; c++)
{
_putchar(i[c]);
}
_putchar('\n');
return (0);
}

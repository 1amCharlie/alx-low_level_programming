#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @dest: destination string;src string is appended to it.
 * @src: source string is the initial string.
 * Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{

int i = 0;
int n = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[n] != '\0')
{
*(dest + i) = src[n];
n++;
i++;
}
*(dest + 1) = '\0';

return (dest);
}

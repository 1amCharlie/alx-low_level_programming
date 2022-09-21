#include main.h

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string;src string is appended to it.
 * @src: source string is the initial string.
 * Return: pointer to destination string.
 */

int main(char *dest, char *src)
{

int i = 0;
int n = 0;

while (*dest[i] != '\0')
{
i++;
}

while (*src[j] != '\0')
{
*(dest + i) = src[j];
j++;
i++;
}
*(dest + 1) = '\0';

return (dest);
}

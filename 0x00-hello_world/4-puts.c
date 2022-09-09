#include <stdio.h>
#include <string.h>
/**
 *Description: main - Print a string using puts function
 *
 *Return: always 0 if successful.
*/
int main(void)
{
char sentence[51];

strcpy(sentence, "Programming is like building a multilingual puzzle");
puts(sentence);
}

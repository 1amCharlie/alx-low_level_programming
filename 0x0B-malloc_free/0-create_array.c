#include <stdlib.h>
#include "main.h"

/**
 **malloc_checked - that creates an array of chars,
 * and initializes it with a specific char.
 * @b: amount of bytes
 * Return: pointer to the allocated memory
 */
void *create_array(unsigned int b)
{
char *p;
p = malloc(b);

if(p == NULL)
exit(98);

return(p);
}

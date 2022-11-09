#include "main.h"

/**
 * _memcpy- copy memory area
 * @dest: a pointer to the memory area to copy @src into
 * @src: The source buffer to copy character from
 * @n: the number of bytes to copy from @src
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int ln;

char *destination = dest;

char *source = src;

for (ln = 0; ln < n; ln++)
{
destination[ln] = source[ln];
}
return (dest);
}

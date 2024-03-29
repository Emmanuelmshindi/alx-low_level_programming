#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s.
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int ln;

char *memory = s, value = b;

for (ln = 0; ln < n; ln++)
memory[ln] = value;

return (memory);
}


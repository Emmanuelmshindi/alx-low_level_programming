#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 *
 * Return: if a set is matched - a pointer to the matched byte.
 * if no set is matched NULL
 */
char *_strpbrk(char *s, char *accept)
{
int ln;

while (*s)
{
for (ln = 0; accept[ln]; ln++)
{
if (*s == accept[ln])
return (s);
}
s++;
}
return ('\0');
}

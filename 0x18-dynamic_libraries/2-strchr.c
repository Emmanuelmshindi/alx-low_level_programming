#include "main.h"
/**
 * _strchr-locates character in a string
 * @s: the string to be searched
 * @c: the character to be located
 * Return: if c is found - a pointer to its first occurence
 *                       - if c is not found NULL
 */
char *_strchr(char *s, char c)
{
int ln = 0;

while (s[ln] >= '\0')
{
ln++;

if (s[ln] == c)

return (s + ln);
}
return ('\0');
}

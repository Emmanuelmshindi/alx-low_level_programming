#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: the string to be encoded
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
int indx1 = 0, indx2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[indx1])
{
for (indx2 = 0; indx2 <= 7; indx2++)
{
if (str[indx1] == leet[indx2] ||
str[indx1] - 32 == leet[indx2])
str[indx1] = indx2 + '0';
}
indx1++;
}
return (str);
}

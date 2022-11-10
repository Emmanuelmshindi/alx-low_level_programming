#include "main.h"
/**
 * _puts_recursion - this is a function to print a string recursively
 * @s: string parameter
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(s[0]);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}

#include "main.h"

/**
 * get_bit - function to return bit at a given index
 * @n: integer
 * @index: index to find
 *
 * Return: value of bit at index index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}

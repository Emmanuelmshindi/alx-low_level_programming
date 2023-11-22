#include "main.h"

/**
 * clear_bit - Function to set the bit at given index to 0
 * @n: pointer to the unsigned long int
 * @index: index of the bit to set
 *
 * Return: 1 if successful, -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}

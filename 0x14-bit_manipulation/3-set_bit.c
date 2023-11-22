#include "main.h"

/**
 * set_bit - function to set bit at given index to 1
 * @n: pointer to the unsigned long int
 * @index: index of bit to be set to 1
 *
 * Return: 1 if it worked, -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) {
        return (-1);
        }

	*n = *n | (1UL << index);
	return (1);
}

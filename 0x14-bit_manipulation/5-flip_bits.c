#include "main.h"

/**
 * flip_bits - return number of bits to flip to get from one number to another
 * @n: unsigned long int n
 * @m: unsigned long int m
 *
 * Return: Number of bits to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned int count = 0;

	a = n ^ m;
	while (a)
	{
		count += a & 1;
		a >>= 1;
	}
	return (count);
}

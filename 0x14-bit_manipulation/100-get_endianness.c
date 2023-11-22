#include "main.h"

/**
 * get_endianness - function to check the endianness
 *
 * Return: 0 if big endian, 1 if small endian
 */
int get_endianness(void)
{
	int num = 1;
	char *byte = (char *)&num;

	return ((int)*byte);
}

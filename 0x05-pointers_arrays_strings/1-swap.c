#include "main.h"

/**
 * swap_int - swaps the volumes of two integers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

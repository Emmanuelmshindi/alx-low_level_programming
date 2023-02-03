#include "hash_tables.h"

/**
 * unsigned long int key_index - the index of a key
 * @key: key, string
 * @size: size of the array
 *
 * Return - the index at which the key/value pair
 *  is stored in the array of the hash table
 *  Description - uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}



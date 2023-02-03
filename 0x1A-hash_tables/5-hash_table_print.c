#include "hash_tables.h"

/**
 * void hash_table_print - Print a hash table
 * @ht: Hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned int long idx = 0;
hash_node_t *node;
char *comma = "";

if (!ht || !ht->array)
return;

putchar('{');
while (idx < ht->size)
{
node = ((ht->array)[idx]);
while (node)
{
printf("%s'%s': '%s'", comma, node->key, node->value);
comma = ", ";
node = node->next;
}
idx++;
}
puts('}');
}





for (i = 0; i < ht->size; i++)
{
if ht->array[i]
{
printf


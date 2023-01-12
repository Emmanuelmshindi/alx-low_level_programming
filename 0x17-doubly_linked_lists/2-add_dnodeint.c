#include "lists.h"

/**
 * add_dnodeint - function that adds new node at the beginning of a dbly
 * linked list.
 * @head:pointer to pointer to head of the list
 * @n: data to be added
 *
 * Return: the address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

/*allocate memory for the new node*/
new_node = malloc(sizeof(dlistint_t *new_node))

/*if it fails return NULL*/
if (new_node == NULL)
return NULL;
/*assign data to new node*/
new_node->n = n
/*Point next of new node to first node of list(head)*/
new_node->next = head
/*Point prev of new node to NULL*/
new_node->prev = NULL
/*Point prev of first node(now 2nd) to new node*/
if ((*head != NULL)
(*head)->prev = new_node
/*Point head to new node*/
(*head)->next = new_node
return new_node
}

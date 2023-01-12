#include "lists.h"

/*
 * add_dnodeint_end - function that adds a new node at the end of
 * a dbly linked list
 * @head: pointer to pointer to head of list
 * @n: data to be added
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *last;

/*Allocate memory for new node*/
new_node = malloc (sizeof(dlistint_t));

/*if it fails return NULL*/
if (new_node == NULL)
return (NULL);
/*Assign data to new node*/
new_node->n = n;
/*The new node is going to be the last
 * so make it point to null*/
new_node->next = NULL;

last = *head;

/*If there is no head/list make new node head node*/
if (*head == NULL)
{
new_node->next = *head;
*head = new_node;
}
else
{
/*traverse the list to get to last node*/
while (last->next);
last = last->next;
/*make last node point to new node*/
last->next = new_node;
}
new_node->prev = last;
return (new_node);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This function prints all elements
 * @h: Is a paramater of the linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}

return (nodes);
}

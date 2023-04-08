#include "lists.h"

/**
 * listint_len - returns the number of elements in linked lists
 * @h: traversing the listint_t type of linked list
 * Return: total no. of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);

}


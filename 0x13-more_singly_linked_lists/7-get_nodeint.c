#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: it points to the head of teh list
 * @index: it is the index of the node to return from 0.
 * Return: NULL if it doesn't exist, or points to the nth node.
 *
 */

listint_T *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->index;
		i++;
	}
	return (i == index ? head : NULL);
}

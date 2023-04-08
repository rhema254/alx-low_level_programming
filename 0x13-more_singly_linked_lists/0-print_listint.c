#include <lists.h>

/**
 * print_listint - function to print elements
 * @h: list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i - 0;

	while (h)
	{
		printf("%d/n", h->n);
		h->next, i++;
	}

	return (i);

}



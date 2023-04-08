#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: it is the pointer to the head of the list
 * Return: It is the sum of all data in the list
 * otherwise,0 if the list is empty
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}

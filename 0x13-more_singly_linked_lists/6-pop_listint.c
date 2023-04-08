#include "lists.h"

/**
 * pop_listint - It deletes the head node of a linked list.
 * @head: it points to the first element in the linked list
 * Return: data inside elements that we delete otherwise 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);
	number = (*head)->n;
	temp = (*head)->next;
	free(*head);

	return (number);
}

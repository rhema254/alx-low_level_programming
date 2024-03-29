#include<lists.h>

/**
 * add_nodeint_end - inserts nodes at linked list end
 * @head: pointer to first element in list
 * @n: the data to add in new element
 *
 * Return: NULL if fail, or New node pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;

		return (new);

	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);

}



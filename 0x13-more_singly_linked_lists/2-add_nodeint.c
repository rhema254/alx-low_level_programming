#include<"lists.h">

/**
 * add_nodeint - places new nodes at the start of each linked list
 * @head: points to first node in list
 * @n: reference to the data inserted in the new node
 *
 * Return: Null if it fails, or pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL)
			new->n = n;
	new->next = *head;
	*head = new;

	return (new);

}


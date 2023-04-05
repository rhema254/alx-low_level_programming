#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a give position
 * @head: double pointer to head mode
 * @idx: its the index of the list where the node should be added
 * @n: Is the data for the new node
 * Return: Is the address of the new node
 * otherwise, NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node;

	unsigned int 1;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp_node = *head;

	for (i = 0; i < idx - 1 && temp_node != NULL; i++)
		temp_node == temp_node->next;

	if (temp_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp_node->next;
	temp_node->next = new_node;
	return (new_node);
}



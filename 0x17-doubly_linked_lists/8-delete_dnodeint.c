#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node to be deleted (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head || !(*head))
	return (-1);

	current = *head;

	if (index == 0)
	{
	*head = current->next;
	if (*head)
	(*head)->prev = NULL;
	free(current);
	return (1);
	}

	for (i = 0; i < index && current; i++)
	current = current->next;

	if (!current)
	return (-1);

	if (current->prev)
	current->prev->next = current->next;
	if (current->next)
	current->next->prev = current->prev;

	free(current);
	return (1);
}

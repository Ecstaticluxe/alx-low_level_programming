#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to th head
 * Return: freed list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp);
	}
}

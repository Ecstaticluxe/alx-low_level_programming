#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_list - frees a list_t list
 * @head: header
 * Return: void
 */
void free_list(list_t *head)
{
list_t *current;

while ((current = head) != NULL)
{
	head = head->next;
	free(current->str);
	head = (current);
}
}


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

list_t *temp;
while (head)
	{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
	}
}

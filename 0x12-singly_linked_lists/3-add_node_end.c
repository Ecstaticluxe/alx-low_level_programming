#include "lists.h"
#include <stdlib.h>
#include <string.h>
int len(const char *str);
/**
 *add_node_end - adds node
 * @head: header
 * @ str: the pointer and new node
 * Return: pointer to the head
 */

list_t *add_node_end(list_t **head, const char *str) 
{
	list_t *new, *temp;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
return (NULL);

	new->str = strdup(str);

       	for (nchar = 0;	str[nchar]; nchar++)
		;
	new->len = nchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{

		*head = new;
	}
       	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}

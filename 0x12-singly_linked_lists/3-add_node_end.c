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

/**
 * create_node: a function that creates node
 * @ str: string of lists
 * Return: pointer
 */

list_t *create_node(const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
	new->str = strdup(str);
	new->len = len(str);
	new->next = NULL;
	return (new);

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
{
while (temp->next)
	temp = temp->next;
}
	temp->next = new;
	return (new);
}

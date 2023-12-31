#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
	int set;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		set = *h - (*h)->next;
		if (set > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);

}


#include "lists.h"
#include <stdlib.h>

/**
 * print_list -  prints all the elements of a list_t list
 * @h: header
 * Return:the number of nodes
 */
size_t print_list(const list_t *h)
{
int i;
if (h == NULL)

	return (0);
for (i = 1; h->next != NULL; i++)
{
	if (h->str == NULL)
	{
		printf("[%u] %s\n", h->len, "(nil)");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}
	h = h->next;
	i++;
}

return (i);
}

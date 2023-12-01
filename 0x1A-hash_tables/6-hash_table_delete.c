#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 *
 */

typedef struct Node
{
    char *key;
    int value;
    struct Node *next;
} Node;

typedef struct
{
    size_t size;
    Node **array;
} hash_table_t;


void hash_table_delete(hash_table_t *ht) 
{
	hash_node_t *bucket, *aux_free;
	        unsigned long int i = 0;
		
		if (ht == NULL)
		{
			return;
		}
		
		for (size_t i = 0; i < ht->size; ++i)
		{
			Node *current = ht->array[i];
			Node *next;
			
			while (current != NULL)
	{
		next = current->next;
		free(current->key);
		free(current);
		current = next;
	}
		}
		free(ht->array);
		free(ht);
}

#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *s = "";

	if (ht == NULL)
		exit(1);
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				printf("%s\'%s\': \'%s\'", s, ht->array[i]->key, ht->array[i]->value);
				s = ", ";
				ht->array[i] = ht->array[i]->next;
			}
		}
	}
	printf("}\n");
}

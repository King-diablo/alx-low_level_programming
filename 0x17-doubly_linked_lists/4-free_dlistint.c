#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head of the list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = NULL;

	while (head)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
}

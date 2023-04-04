#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a list of type listint_t.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *current = *h;

	while (current != NULL)
	{
		count++;

		if (current <= current->next)
		{
			*h = NULL;
			return (count);
		}

		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (count);
}


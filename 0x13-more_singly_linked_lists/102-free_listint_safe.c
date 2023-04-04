#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		size++;
		if (current <= current->next)
		{
			tmp = current->next;
			free(current);
			current = tmp;
		}
		else
		{
			free(current->next);
			free(current);
			*h = NULL;
			return (size);
		}
	}

	*h = NULL;
	return (size);
}


#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to head node of list
 * Return: head node's data (n), or 0 if list is empty
 **/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	data = current->n;
	*head = current->next;
	free(current);

	return (data);
}


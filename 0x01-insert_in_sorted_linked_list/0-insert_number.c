#include "lists.h"

/**
 *
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *prev = NULL, *p, *new;
	if (!head)
		return (NULL);
	p = *head;
	while (p)
	{
		if (p->n > number)
			break;
		prev = p;
		p = p->next;
	}
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = number;
	if (prev)
		prev->next = new;
	else
		*head = new;
	new->next = p;
	return (new);
}

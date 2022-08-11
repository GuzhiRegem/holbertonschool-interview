#include "lists.h"

/**
 * insert_node - func
 * @head: list
 * @number: new_node
 * Return: list
 **/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *pr, *nx = NULL, *new;
	int n = number;

	pr = *head;
	if (pr)
	{
		nx = pr;
		if (pr->n > n)
			pr = NULL;
		else
			for (nx = pr->next; nx && nx->n <= n; pr = nx, nx = pr->next)
				;
	}
	new = malloc(sizeof(listint_t *));
	if (!new)
		return (NULL);
	new->n = number;
	new->next = nx;
	if (pr)
		pr->next = new;
	else
		*head = new;
	return (new);
}

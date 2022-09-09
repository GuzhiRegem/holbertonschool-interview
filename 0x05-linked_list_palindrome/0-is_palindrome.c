#include "lists.h"
#include <stdlib.h>

/**
 * new_node - creates node
 * @n: num
 * @next: next
 * Return: return
 */
listint_t *new_node(int n, listint_t *next)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = next;
	return (new);
}

/**
 * is_palindrome - check if palindrome
 * @head: head
 * Return: intBool
 */
int is_palindrome(listint_t **head)
{
	listint_t *p, *rev = NULL, *r;
	int i, mid, out = 1;

	p = *head;
	if (!p)
		return (1);
	for (i = 1; p->next; i++, p = p->next)
		rev = new_node(p->n, rev);
	mid = (i / 2) + (i % 2);
	p = *head, r = rev;
	for (i = 0; i < mid; i++)
	{
		if (p->n != r->n)
			out = 1;
		p = p->next;
		r = r->next;
	}
	for (; rev; rev = r)
	{
		r = rev->next;
		free(rev);
	}
	return (out);
}

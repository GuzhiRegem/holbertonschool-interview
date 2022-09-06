#include "lists.h"

/**
 * pal - recursirve linked list palindrome
 * @list: list to check
 * @len: length of list
 * Return: 1 if true, 0 if false
 */
int pal(listint_t *list, int len)
{
	listint_t *end = list;
	int i;

	if (len <= 1)
		return (len);
	for (i = 0; i < (len - 1); i++)
		end = end->next;
	if (list->n != end->n)
		return (0);
	if (len == 2)
		return (1);
	return (pal(list->next, len - 2));
}

/**
 * is_palindrome - check if palindrome
 * @head: head
 * Return: intBool
 */
int is_palindrome(listint_t **head)
{
	listint_t *p;
	int i;

	p = *head;
	if (!p)
		return (1);
	for (i = 1; p->next; i++)
		p = p->next;
	return (pal(*head, i));
}

#include "binary_trees.h"

/**
 * heap_insert - create node
 * @value: value
 * Return: new
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new, *h;

	h = *root;
	if (!h)
	{
		*root = binary_tree_node(NULL, value);
		return (*root);
	}
	if (value >= h->n)
	{
		new = binary_tree_node(h->parent, value);
		if (new)
		{
			new->left = h;
			h->parent = new;
			*root = new;
		}
		return (new);
	}
	if (!h->right)
	{
		new = binary_tree_node(h, value)
		if (!h->left)
		{
			h->left = new;
			return (h->left);
		}
		if (value <= h->left->n)
		{

		}
	}
}

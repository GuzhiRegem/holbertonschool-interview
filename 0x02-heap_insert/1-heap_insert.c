#include "binary_trees.h"

/**
 * heap_insert - insert in heap
 * @root: root of tree
 * @value: value to insert
 * Return: new
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *actual, *parent = NULL, *new;

	if (!*root)
	{
		*root = binary_tree_node(NULL, value);
		return *root;
	}
	actual = *root;
	new = binary_tree_node(NULL, value);
	if (actual->n <= value)
	{
		(*root)->parent = new;
		new->left = *root;
		*root = new;
	}
	parent = NULL;
	if (parent)
		return(new);
	return (new);
}

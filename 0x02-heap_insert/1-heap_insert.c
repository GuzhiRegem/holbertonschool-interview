#include "binary_trees.h"

/**
 * get_heap_height - height
 * @root: root
 * Return: height
 */
int get_heap_height(heap_t *root)
{
	int l, r;

	if (!root)
		return (0);
	l = get_heap_height(root->left);	
	r = get_heap_height(root->right);
	return ((l ? l > r : r) + 1);
}

/**
 * get_heap_count - height
 * @root: root
 * Return: height
 */
int get_heap_count(heap_t *root)
{
	int l, r;

	if (!root)
		return (0);
	l = get_heap_count(root->left);	
	r = get_heap_count(root->right);
	return (l + r + 1);
}

/**
 * heap_insert - create node
 * @value: value
 * Return: new
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *h;

	h = *root;
	if (!h)
	{
		*root = binary_tree_node(NULL, value);
		return (*root);
	}
	(*root)->left = binary_tree_node(*root, value);
	return (*root);
}

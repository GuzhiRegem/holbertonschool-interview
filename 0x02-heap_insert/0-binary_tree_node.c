#include "binary_trees.h"

/**
 * binary_tree_node - binary tree node
 * @parent: parent
 * @value: value
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *out;

	out = malloc(sizeof(binary_tree_t));
	if (out)
	{
		out->parent = parent;
		out->n = value;
		out->left = NULL;
		out->right = NULL;
	}
	return (out);
}

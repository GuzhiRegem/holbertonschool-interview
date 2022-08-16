#include "binary_trees.h"

/**
 * binary_tree_node - create node
 * @parent: parent
 * @value: value
 * Return: new
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *out;

	out = malloc(sizeof(binary_tree_t));
	if (!out)
		return (NULL);
	out->n = value;
	out->parent = parent;
	return (out);
}

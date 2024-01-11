#include "binary_trees.h"

/**
 * binary_tree_is_root - function that check if given node is a root
 * @node: a node to check
 * Return: 1(node is root) or 0(otherwise)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}

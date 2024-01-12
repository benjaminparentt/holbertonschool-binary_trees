#include "binary_trees.h"

/**
 * binary_tree_sibling - finds a sibling node of @node
 * @node: a node from binary tree
 * Return: the sibling node or NULL (unfound)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}

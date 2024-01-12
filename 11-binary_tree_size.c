#include "binary_trees.h"

/**
 * binary_tree_size - a compute how much node are there from @tree node
 * @tree: a node
 * Return: the size of @tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) +
			binary_tree_size(tree->right));
}

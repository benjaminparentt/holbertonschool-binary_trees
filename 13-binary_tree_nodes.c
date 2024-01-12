#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least 1 child
 * @tree: a binary tree
 * Return: how many nodes found
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));

	return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}

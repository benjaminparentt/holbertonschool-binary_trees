#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if @node is a leaf
 * @node: a tree
 * Return: 1(node is a leaf) or 0(node is not a leaf)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left != NULL && node->right != NULL)
		return  (1);
	return (0);
}

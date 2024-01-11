#include "binary_trees.h"

/**
 * binary_tree_height - computer the height of @tree
 * @tree: a binary tree
 * Return: the height of @tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_size = 0, left_size = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	else
	{
		right_size =  binary_tree_height(tree->right);
		left_size =  binary_tree_height(tree->left);

		if (right_size < left_size)
			return (1 + right_size);
		else
			return (1 + left_size);
	}
}

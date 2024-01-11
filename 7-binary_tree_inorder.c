#include "binary_trees.h"

/**
 * binary_tree_inorder - function call @func function in-order traversal
 * through @tree tree
 * @tree: a binary tree
 * @func: a function
 */
void binary_tree_inorder(const binary_tree_t *tree,
		void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

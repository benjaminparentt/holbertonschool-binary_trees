#include "binary_trees.h"

/**
 * binary_tree_preorder - call @func in preorder traversal
 * @func: function to be called
 * @tree: a binary tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

#include "binary_trees.h"

int is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_full - check if @tree is full
 * @tree: a binary tree
 * Return: 1 (@trees is full) 0(other wise)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_full(tree));
}

/*
 * is_full - check if @tree is not full
 * @tree: a binary tree
 * Return: n (@trees with one child)
 */
int is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (!((tree->left != NULL && tree->right != NULL) ||
				(tree->left == NULL && tree->right == NULL)))
		{
			return (0);
		}
		else
			return (is_full(tree->left) * is_full(tree->right));
	}
	return (1);
}

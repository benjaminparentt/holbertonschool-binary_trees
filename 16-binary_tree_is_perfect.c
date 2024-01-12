#include "binary_trees.h"

int is_full(const binary_tree_t *tree);
int _height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - check if @tree is perfect
 * @tree: a binary_tree
 * Return: 1(true) 0(false)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_full(tree) * _height(tree));
}

/**
 * _height - computer the height of @tree
 * @tree: a binary tree
 * Return: the height of @tree
 */
int _height(const binary_tree_t *tree)
{
	int right_size = 0, left_size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL && tree->parent == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	right_size =  _height(tree->right);
	left_size =  _height(tree->left);

	if (right_size != left_size)
		return (0);
	else
		return (1);
}

/**
 * is_full - check if @tree is not full
 * @tree: a binary tree
 * Return: 1 (full) 0(not full)
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

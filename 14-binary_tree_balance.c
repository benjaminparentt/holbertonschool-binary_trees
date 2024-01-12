#include "binary_trees.h"

int _height(const binary_tree_t *tree);

/**
 * binary_tree_balance - computer balance factor of @tree
 * @tree: a binary tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	return (_height(tree->left) - _height(tree->right));
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

	right_size =  _height(tree->right);
	left_size =  _height(tree->left);

	if (right_size > left_size)
		return (1 + right_size);
	else
		return (1 + left_size);
}

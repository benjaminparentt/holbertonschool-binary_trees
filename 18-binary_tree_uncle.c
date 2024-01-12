#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of @node
 * @node: a node of a binary tree
 * Return: the uncle of @node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent != NULL)
		{
			if (node->parent->parent != NULL)
			{
				if (node->parent == node->parent->parent->left)
				{
					return (node->parent->parent->right);
				}
				else
				{
					return (node->parent->parent->left);
				}
			}
		}
	}
	return (NULL);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to insert right child
 * @parent: a parent node
 * @value: value of new right node
 * Return: new created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->right != NULL)
	{
		tmp = parent->right;
		parent->right = node;
		node->right = tmp;
	}
	else
		parent->right = node;

	return (node);
}

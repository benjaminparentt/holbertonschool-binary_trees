#include "binary_trees.h"

/**
 * binary_tree_insert_left - funct that add a left-child to parent node
 * @parent: a parent node
 * @value: a node value
 * Return: a pointer to the new created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *temp = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = node;
		node->left = temp;
	}
	else
		parent->left = node;

	return (node);
}

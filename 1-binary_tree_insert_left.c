#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that add a node on left of node
 * @parent: a parent node
 * @value: value of new node to be created
 * Return: new node created(success) or NULL(failure)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

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
		(node->left) = parent->left;
		parent->left->parent = node;
	}

	(parent->left) = node;

	return (node);
}

#include "binary_trees.h"

/**
 * binary_tree_node - function that create new node child of parent
 * @parent: parent node
 * @value: a value of the node to be created
 * Return: a New created node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent != NULL)
	{
		if (parent->left != NULL && parent->right != NULL)
			return (NULL);
	}

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent != NULL)
	{
		if (parent->left == NULL)
			parent->left = node;
		else
			parent->right = node;
	}

	return (node);
}

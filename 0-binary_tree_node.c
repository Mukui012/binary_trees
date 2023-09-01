#include "binary_trees.h"

/**
 * *binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *i;

	i = malloc(sizeof(binary_tree_t));
	if (i == NULL)
		return (NULL);
	if (i != NULL)
	{
		if (!parent)
			i->parent = NULL;
		else
			i->parent = parent;
		i->n = value;
		i->left = NULL;
		i->right = NULL;
	}
	return (i);
}


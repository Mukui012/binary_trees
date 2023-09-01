#include "binary_trees.h"

/**
 * *binary_tree_node_s - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to new node, or NULL on failure
 */

binary_tree_t *binary_tree_node_s(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	if (node != NULL)
	{
		if (!parent)
			node->parent = NULL;
		else
			node->parent = parent;
		node->n = value;
		node->left = NULL;
		node->right = NULL;
	}
	return (node);
}

/**
 * *binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node_s(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	parent->left = new_node;
	return (new_node);
}

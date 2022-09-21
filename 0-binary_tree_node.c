#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree
 * @parent: pointer to the parent node
 * @value: value to insert in new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	NewNode = malloc(sizeof(binary_tree_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->parent = parent;
	NewNode->left = NULL;
	NewNode->right = NULL;
	NewNode->n = value;

	return (NewNode);
}

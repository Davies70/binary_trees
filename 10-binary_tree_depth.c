#include "binary_trees.h"

/**
 * binary_tree_depth - finds depth of binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of node or NULL if node is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	return (depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}

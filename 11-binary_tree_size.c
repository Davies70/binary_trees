#include "binary_trees.h"
/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: pointer to the root to measure the size
 * Return: size of tree or NULL if root is empty
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (1 + r + l);
}

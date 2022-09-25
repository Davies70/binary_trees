#include "binary_trees.h"

/**
 * binary_tree_height -  returns the hight of a binaryy tree
 * @tree: pointer to the root
 * Return: height of tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	l = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	r = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	return (l > r ? l : r);
}

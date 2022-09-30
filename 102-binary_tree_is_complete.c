#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if the binary tree is complete
 * @tree: root pointer of the tree
 * Return: 1 if complete, 0 otherwise
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right == NULL && 
			tree->left->left == NULL &&
			tree->left->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_complete(tree->left) && 
				binary_tree_is_complete(tree->right));
	return (0);
}

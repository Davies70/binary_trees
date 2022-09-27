#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: if tree is NULL, return 0; 1 if tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (tree->left && tree->right)
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);

}
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


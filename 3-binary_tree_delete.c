#include "binary_trees.h"

/**
 * binary_tree_delete - free up binary tree
 * @tree: root node
 * Return: Nothing on success and if root node is empty
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);

}

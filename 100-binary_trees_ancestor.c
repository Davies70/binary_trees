#include "binary_trees.h"
/**
 * binary_trees_ancestor - check for a common ancestor between
 * two nodes
 * @first: first node
 * @second: second node
 * Return: NULL if no ancestor or pointer to the shared ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	const binary_tree_t *temp;

	if (first == NULL || first->parent == NULL ||
			second == NULL || second->parent == NULL)
		return (NULL);

	while (first)
	{
		temp = second;
		while (temp)
		{
			if (first == temp)
				return ((binary_tree_t *)first);
			temp = temp->parent;
		}
		first = first->parent;
	}
	return (NULL);
}


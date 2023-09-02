#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of a node in a tree
 * @tree: node to check
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 1;

	if (tree == NULL)
		return (0);
	i += binary_tree_depth(tree->parent);
	if (tree->parent == NULL)
		i--;
	return (i);
}

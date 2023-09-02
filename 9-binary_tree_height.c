#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: the tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 1;

	if (tree == NULL)
		return (0);
	i += binary_tree_height(tree->left);
	if (tree->parent == NULL)
		i--;
	return (i);
}

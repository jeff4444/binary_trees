#include "binary_trees.h"

/**
 * binary_tree_size - measures size of a binary tree
 * @tree: the tree
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 1, h = 0;

	if (tree == NULL)
		return (0);
	h += binary_tree_size(tree->left);
	h += binary_tree_size(tree->right);
	i += h;
	return (i);
}

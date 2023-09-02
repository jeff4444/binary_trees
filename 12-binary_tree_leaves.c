#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves of a binary tree
 * @tree: the tree
 * Return: height of tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) || (tree->right == NULL))
		return (1);
	l += binary_tree_leaves(tree->left);
	l += binary_tree_leaves(tree->right);
	return (l);
}

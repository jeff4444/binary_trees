#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: the tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 1, l, r;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l > r)
		i += l;
	else
		i += r;
	if (tree->parent == NULL)
		i--;
	return (i);
}

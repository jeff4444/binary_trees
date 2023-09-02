#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a tree is a leaf
 * @node: node to be checked
 * 1 (if leaf) 0 (otherwise)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->left == NULL) && (node->right == NULL))
		return (1);
	return (0);
}
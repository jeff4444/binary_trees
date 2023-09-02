#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree
 * @tree: the tree to be traversed
 * @func: function t be ran on each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((func == NULL) || (tree == NULL))
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

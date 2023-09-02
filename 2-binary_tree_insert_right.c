#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node on the right child of another
 * @parent: parent node
 * @value: value of new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;
	if (parent->right == NULL)
		parent->right = newNode;
	else
	{
		parent->right->parent = newNode;
		newNode->right = parent->right;
		parent->right = newNode;
	}
	return (newNode);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node on the left child of another
 * @parent: parent node
 * @value: value of new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left == NULL)
		parent->left = newNode;
	else
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
		parent->left = newNode;
	}
	return (newNode);
}

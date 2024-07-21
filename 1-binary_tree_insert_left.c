#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a child node at the left
 *
 * @parent: parent of the newely created node
 * @value: the value of the newely created node
 *
 * Return: pointer to the newely created node or NULL if it failed
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *temp;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent->left, value);
	if (!newNode)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = parent->left;
	parent->left = newNode;

	if (parent->left)
		newNode->parent->right = newNode;

	return (newNode);
}

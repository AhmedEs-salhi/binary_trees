#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a child node at the left
 *
 * @parent: parent of the newely created node
 * @value: the value of the newely created node
 *
 * Return: pointer to the newely created node or NULL if it failed
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->right = parent->right;
	newNode->left = NULL;
	parent->right = newNode;

	if (newNode->right)
		newNode->parent->right = newNode;

	return (newNode);
}

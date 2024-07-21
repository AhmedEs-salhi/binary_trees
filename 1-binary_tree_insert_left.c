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
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = parent->left;
	parent->left = newNode;

	if (newNode->left)
		newNode->left->parent = newNode;

	return (newNode);
}

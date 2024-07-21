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
	binary_tree_t *newNode, *temp;

	newNode = binary_tree_node(parent->right, value);

	if (!parent || !newNode)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;

	if ((parent->right) != NULL)
	{
		temp = parent->right;
		parent->right =  newNode;
		newNode->right = temp;
		temp->parent = newNode;
	}
	else
		parent->right = newNode;

	return (newNode);
}

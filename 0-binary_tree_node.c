#include "binary_trees.h"

/**
 * binary_tree_node - function that create a new node of a binary tree
 *
 * @parent: the parent of the newely created node
 * @value: the value of the node
 *
 * Return: a pointer to the newely created node or NULL if it failed
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}

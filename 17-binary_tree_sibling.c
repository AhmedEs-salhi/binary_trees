#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node in a binary tree
 *
 * @node: the node to search for its sibling
 *
 * Return: the sibling node of the @node
 *
 */

binary_tree_t *binary_tree_sibling(const binary_tree_t *node)
{
	binary_tree_t *nodeParent;

	nodeParent = node->parent;
	if (node == NULL || nodeParent == NULL)
		return (NULL);
	if (node->n == nodeParent->right->n)
		return (nodeParent->left);
	else
		return (nodeParent->right);
}

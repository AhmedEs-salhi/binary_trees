#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node in a binary tree
 *
 * @node: the node to search for its sibling
 *
 * Return: the sibling node of the @node variable
 *	NULL if the node is NULL
 *	NULL if the parent is NULL
 *	NULL if the node has no sibling
 *
 */

binary_tree_t *binary_tree_sibling(const binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (!node->parent->right || !node->parent->left)
		return (NULL);
	if (node->n == node->parent->right->n)
		return (node->parent->left);
	return (node->parent->right);
}

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree
 *
 * @node: the node to find its uncle
 *
 * Return: the pointer to the uncle node
 *	NULL if the node is NULL
 *	NULL if the parent is NULL
 *	NULL if the node has no uncle
 *
 */

binary_tree_t *binary_tree_uncle(const binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));

}

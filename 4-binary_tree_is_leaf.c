#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that check if a node is leaf or not
 *
 * @node: the node to be checked
 *
 * Return: return 1 if the node is leaf or 0 otherwise
 *
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

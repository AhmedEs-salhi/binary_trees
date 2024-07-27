#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes that have at least one child
 *
 * @tree: root of the binary tree
 *
 * Return: number of the one-child nodes or 0 if it failed
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->right && !tree->left))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

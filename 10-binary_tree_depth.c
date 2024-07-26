#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the height of a binary tree
 *
 * @tree: the node to calculate the height from
 *
 * Return: the depth of the binary tree
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

	return (depth);
}

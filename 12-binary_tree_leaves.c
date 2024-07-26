#include "binary_trees.h"

/**
 * binary_tree_leaves - counts how much leaves in a binary tree
 *
 * @tree: the root of the binary tree
 *
 * Return: the number of the leaves of 0 if it failed
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t result;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);

	result = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (result);
}

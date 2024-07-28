#include "binary_trees.h"

/**
 * binary_tree_is_full - tells if the binary tree is full or not
 *
 * @tree: the root of the binary tree
 *
 * Return: return 1 if it's full or 0 if it's not or if it's failed
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));

	return (0);
}

#include "binary_trees.h"

/**
 * bstHelper - validate a binary search tree helper
 *
 * @root: the root of a binary tree
 * @min: minimum boundry
 * @max: the maximum boundry
 *
 * Return: 1 if it is a binary search tree
 *	0 otherwise
 *
 */

int bstHelper(binary_tree_t *root, int min, int max)
{
	if (!root)
		return (1);
	if (!(root->n > min && root->n < max))
		return (0);
	return (bstHelper(root->left, min, root->n) &&
			bstHelper(root->right, root->n, max));
}

/**
 * binary_tree_is_bst - validate a binary search tree
 *
 * @root: the root of the binary tree
 *
 * Return: 1 if it is a binary search tree
 *	0 otherwise
 *
 */

int binary_tree_is_bst(binary_tree_t *root)
{
	if (!root)
		return (0);
	return (bstHelper(root, INT_MIN, INT_MAX));
}

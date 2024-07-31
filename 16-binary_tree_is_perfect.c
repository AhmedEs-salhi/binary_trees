#include "binary_trees.h"

/**
 * binary_tree_is_leave - check a node if it's a leave node or not
 *
 * @tree: the node to check
 *
 * Return: 1 if it's a leave not or 0 if it's not or it failed
 *
 */

size_t binary_tree_is_leave(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect or no
 *
 * @root: the root of the binary tree
 *
 * Return: 1 if it's perfect or  0 if it's not or it failed
 *
 */

int binary_tree_is_perfect(const binary_tree_t *root)
{
	if (!root)
		return (0);
	if ((root->left == NULL) != (root->right == NULL))
		return (0);
	if (root->left == NULL)
		return (1);
	if ((root->left->left == NULL) != (root->right->left == NULL))
		return (0);
	if (!binary_tree_is_perfect(root->left) ||
!binary_tree_is_perfect(root->right))
		return (0);
	return (1);
}

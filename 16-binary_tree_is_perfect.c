#include "binary_trees.h"

/**
 * binary_tree_height - calculate the height of a binary tree
 *
 * @tree: the node to calculate the height from
 *
 * Return: the height of the binary tree
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_is_perfect - calculate the balance factor of binary tree
 *
 * @tree: the root of the binary tree
 *
 * Return: the balance factor of 0 if it failed
 *
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (!tree)
		return (0);

	leftHeight = tree->left ? (int)binary_tree_height(tree->left) : -1;
	rightHeight = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (leftHeight == rightHeight);
}

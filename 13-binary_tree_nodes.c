#include "binary_trees.h"

/**
 * binary_tree_size - function that calculate the size of a binary tree
 *
 * @tree: the root of the binary tree
 *
 * Return: the size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1;
	return (size);
}

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

/**
 * binary_tree_nodes - counts the number of nodes that have at least one child
 *
 * @tree: the root of the binary tree
 *
 * Return: the number of one-child nodes or 0 if it failed
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->right && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

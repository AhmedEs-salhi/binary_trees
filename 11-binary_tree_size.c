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

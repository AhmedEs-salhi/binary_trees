#include "binary_trees.h"

int is_complete(const binary_tree_t *, size_t, size_t);

/**
 * binary_tree_is_complete - checks if a binary tree is complete or not
 *
 * @tree: the root of a binary tree
 *
 * Return: 1 if the binary tree is complete or 0 if it's not
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (1);
	size = binary_tree_size(tree);
	return (is_complete(tree, 0, size));

}

/**
 * is_complete - check if a binary tree is complete or not
 *
 * @tree: the node to check
 * @index: the index to check
 * @size: the size of the binary tree
 *
 * Return: 1 if the binary tree was complete, 0 otherwise
 */

int is_complete(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);
	if (index >= size)
		return (0);
	return (is_complete(tree->left, 2 * index + 1, size) &&
			is_complete(tree->right, 2 * index + 2, size));
}

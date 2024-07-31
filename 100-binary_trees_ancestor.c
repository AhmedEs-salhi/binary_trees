#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the lowest common ancestor of two nodes
 *
 * @first: the first node
 * @second: the second node
 *
 * Return: the lowest common ancestor of @first and @second
 *	NULL if it failed
 *
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int firstDepth, secondDepth;

	if (!first || !second)
		return (NULL);

	firstDepth = binary_tree_depth(first);
	secondDepth = binary_tree_depth(second);

	while (firstDepth > secondDepth)
	{
		first = first->parent;
		firstDepth--;
	}

	while (secondDepth > firstDepth)
	{
		second = second->parent;
		secondDepth--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - calculates the height of a binary tree
 *
 * @tree: the node to calculate the height from
 *
 * Return: the depht of the binary tree
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth);
}

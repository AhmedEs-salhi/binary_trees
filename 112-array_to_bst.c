#include "binary_trees.h"

/**
 * array_to_bst - convert an array to a binary search tree
 *
 * @array: the array to be converted to a bst
 * @size: the size of the @array
 *
 * Return: pointer to the root of the bst
 *
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root, *node;
	size_t i;

	if (!array || !size)
		return (NULL);

	root = binary_tree_node(NULL, array[0]);
	node = root;

	if (!root || !node)
		return (NULL);

	for (i = 1; i < size; i++)
	{
		node = bst_insert(&root, array[i]);
	}

	return (root);
}

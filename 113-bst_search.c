#include "binary_trees.h"

/**
 * bst_search - search for a value in a binary search tree
 *
 * @root: pointer to the root of a binary search tree
 * @value: the value we search for
 *
 * Return: the node that has the value we search for
 *	NULL otherwis
 */

bst_t *bst_search(const bst_t *root, int value)
{
	bst_t *tree;

	tree = (bst_t *)root;

	if (!tree || !root)
		return (NULL);

	while (tree)
	{
		if (value == tree->n)
			return (tree);
		else if (value > tree->n)
			tree = tree->right;
		else
			tree = tree->left;
	}

	return (NULL);
}

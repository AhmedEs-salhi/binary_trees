#include "binary_trees.h"

/**
 * bst_minimum - finds the minimum node in binary search tree
 *
 * @root: the root of the bst
 *
 * Return: the minimum node
 *
 */

bst_t *bst_minimum(bst_t *root)
{
	bst_t *min;

	min = root;
	while (min->left)
		min = min->left;
	return (min);
}

/**
 * bst_remove - remove a node from a binary search tree
 *
 * @root: the root of the bst
 * @value: the value to be removed
 *
 * Return: the root of the bst after removing
 *
 */

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp;

	if (!root)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			temp = root->right;
			free(root);
			return (temp);
		}
		else if (!root->right)
		{
			temp = root->left;
			free(root);
			return (temp);
		}
		temp = bst_minimum(root->right);
		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}
	return (root);
}


#include "binary_trees.h"

/**
 * binary_tree_rotate_right - do the rotate left of a binary tree
 *
 * @root: the root node of the binary tree
 *
 * Return: the root of the rotated binary tree
 *
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *root)
{
	binary_tree_t *temp = root;

	if (!root || !root->left)
		return (NULL);

	root = temp->left;
	temp->parent = root;
	root->parent = NULL;

	if (root->right != NULL)
	{
		temp->left = root->right;
		root->right->parent = temp;
	}
	else
		temp->left = NULL;
	root->right = temp;

	return (root);
}

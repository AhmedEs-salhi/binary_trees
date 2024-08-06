#include "binary_trees.h"

/**
 * binary_tree_rotate_left - do the rotate left of a binary tree
 *
 * @root: the root node of the binary tree
 *
 * Return: the root of the rotated binary tree
 *
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *root)
{
	binary_tree_t *temp = root;

	if (!root || !temp)
		return (NULL);

	root = temp->right;
	temp->parent = root;
	root->parent = NULL;

	if (root->left != NULL)
	{
		temp->right = root->left;
		root->left->parent = temp;
	}
	else
		temp->right = NULL;
	root->left = temp;

	return (root);
}

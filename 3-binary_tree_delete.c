#include "binary_trees.h"

/**
 * binary_tree_delete - function that delete a binary tree
 *
 * @root: the root of the binary tree
 *
 */

void binary_tree_delete(binary_tree_t *root)
{
	if (root == NULL)
		return;

	binary_tree_delete(root->right);
	binary_tree_delete(root->left);
	free(root);
}

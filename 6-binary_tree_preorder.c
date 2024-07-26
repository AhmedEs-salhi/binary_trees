#include "binary_trees.h"

/**
 * binary_tree_preorder - function that traverses a binary tree
 *			using the pre-order method
 *
 * @tree: the root of the tree
 * @func: pointer to a function
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}

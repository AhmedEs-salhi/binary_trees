#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a binary tree
 *
 * @tree: the root of the binary tree
 *
 * Return: the height of the binary tree or 0 if it failed
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (left + 1);
	return (right + 1);
}

/**
 * print_current_level - prints the current level of a binary tree
 *
 * @tree: the root of the binary tree
 * @level: the level to be printed
 * @func: pointer to a function that prints the level
 *
 * Return: void
 *
 */

void print_current_level(const binary_tree_t *tree, size_t level,
		void (*func)(int))
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_current_level(tree->left, level - 1, func);
		print_current_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - prints a binary tree using level order method
 *
 * @tree: the root of the binary tree
 * @func: function that prints the data of a node in a binary tree
 *
 * Return: void
 *
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level;
	size_t i;

	if (!tree || !func)
		return;

	level = binary_tree_height(tree);
	for (i = 1; i <= level; i++)
		print_current_level(tree, i, func);
}

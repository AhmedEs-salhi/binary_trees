#include "binary_trees.h"

/**
 * bst_insert - inserts in a binary search tree
 *
 * @tree: double pointer to the root of the bst
 * @value: the value of the bst
 *
 * Return: the node newly created
 *
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp = NULL;
	bst_t *new = NULL;
	bst_t *secTemp = NULL;

	if (!tree)
		return (NULL);

	if ((*tree) == NULL)
		return (*tree = binary_tree_node(NULL, value));
	temp = (*tree);

	while (temp)
	{
		secTemp = temp;
		if (temp->n < value)
			temp = temp->right;
		else if (temp->n > value)
			temp = temp->left;
		else if (temp->n == value)
			return (NULL);
	}

	new = binary_tree_node(NULL, value);
	if (secTemp == NULL)
		secTemp = new;

	if (value > secTemp->n)
	{
		secTemp->right = new;
		new->parent = secTemp;
	}
	else
	{
		secTemp->left = new;
		new->parent = secTemp;
	}

	return (new);
}

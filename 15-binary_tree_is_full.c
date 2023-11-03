#include "binary_trees.h"

/**
 * is_full_recursive - Checks for fullness
 * @tree: A pointer to the root nod
 *
 * Return: 0 if not full.
 *         Otherwise, 1.
 */
int is_full_rec(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_rec(tree->left) == 0 ||
		    is_full_rec(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks for tree full.
 * @tree: A pointer to the root node
 *
 * Return: 0 if tree is NULL
 *         Otherwise, 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_rec(tree));
}

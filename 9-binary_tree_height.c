#include "binary_trees.h"

/**
 * binary_tree_height - determine tree's height
 *
 * @tree: pointer to the root if the tree
 *
 * Return: integer of the tree's height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else 
	{
		size_t length_left = binary_tree_height(tree->left);
		size_t length_right = binary_tree_height(tree->right);
		if (length_left > length_right)
			return (length_left + 1);
		else
			return (length_right + 1);
	}
}

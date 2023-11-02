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
	if (tree)
	{
		size_t leftH = 0;
		size_t rightH = 0;
		leftH = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rightH = tree-> right ? 1 + binary_tree_height(tree->right) : 0;
		return ((leftH > rightH) ? leftH : rightH);
	}
	return (0);
}

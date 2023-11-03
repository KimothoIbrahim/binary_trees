#include "binary_trees.h"

/**
 * binary_tree_preorder - applies a function to every value
 * of the tree during traversal
 *
 * @tree: pointer to tree's root
 * @func: pointer to the function to be applied
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

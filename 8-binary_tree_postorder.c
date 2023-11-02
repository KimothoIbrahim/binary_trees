#include "binary_trees.h"

/**
 * binary_tree_postorder - applies a function `func` during
 * tree traversal in postorder mode
 *
 * @tree: pointer to tree's root node
 * @func: funtion to apply to each nodde value
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

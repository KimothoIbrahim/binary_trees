#include "binary_trees.h"

/**
 * binary_tree_inorder - applies a function `func` during
 * tree traversal in inorder mode
 *
 * @tree: pointer to tree's root node
 * @func: funtion to apply to each nodde value
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

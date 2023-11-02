#include "binary_trees.h"

/**
 * binary_tree_is_root - determines whether a node is the
 * root node of the tree
 *
 * @node: node to inspect
 *
 * Return: 1 if  node is root node: 0 if otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}

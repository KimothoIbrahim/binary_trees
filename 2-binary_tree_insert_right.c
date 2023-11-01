#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	if(parent->right != NULL)
		parent->right->parent = newNode;
	newNode->right = parent->right;
	parent->right = newNode;

	return (newNode);
}

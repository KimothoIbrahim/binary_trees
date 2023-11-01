#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a newnode to the right
 * of a given tree node
 *
 * @parent: pointer to parent node
 * @value: data value to assign new node
 *
 * Return: ponter to added node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
		parent->right->parent = newNode;
	newNode->right = parent->right;
	parent->right = newNode;

	return (newNode);
}

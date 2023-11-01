#include "binary_trees.h"

/**
 * binary_tree_insert_left - makes a new node and
 * attaches it to the left of parent node
 *
 * @parent: node to which the new node is to be attached.
 * if parent had a node on the left replace it with the
 * new node. attach the old left node to be he left child
 * of the new node.
 *
 * @value: integer to give as data for new node.
 *
 * Return: pointer to the newly made node. NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	binary_tree_t *newNode =  binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}

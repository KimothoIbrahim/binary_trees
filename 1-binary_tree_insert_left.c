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
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = parent->left;
	if (parent->left != NULL)
		parent->left->parent = newNode;
	parent->left = newNode;

	return (newNode);
}

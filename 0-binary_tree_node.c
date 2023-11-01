#include "binary_trees.h"

/**
 * binary_tree_node - creates a new nodde for the binary tree
 * @parent: pointer to the parent node
 * @value: integer to store as data in the node
 *
 * Return: pointter to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}

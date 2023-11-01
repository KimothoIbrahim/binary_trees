#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL) return (NULL);
    binary_tree_t *newNode = malloc(sizeof(binary_tree_t))

    if (newNode == NULL) return (NULL);
    newNode->parent = parent;
    newNode->n = value;
    newNode->right = NULL;
    newNode->left = parent->left;
    parent->left = newNode;
}
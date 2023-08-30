#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL if none
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	/* Check if node or parent is NULL */
	if (!node || node->parent == NULL)
		return (NULL);

	/* Get the parent and grandparent nodes */
	parent = node->parent;
	grandparent = parent->parent;

	/* Check if grandparent is NULL */
	if (!grandparent)
		return (NULL);

	/* Check if parent is the left child of the grandparent */
	if (parent == grandparent->left)
		/* Return the right child of the grandparent as the uncle */
		return (grandparent->right);
	/* Otherwise, parent is the right child of the grandparent */
	else
		/* Return the left child of the grandparent as the uncle */
		return (grandparent->left);
}

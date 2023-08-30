#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node, or NULL if none
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	/* Check if node or parent is NULL */
	if (!node || node->parent == NULL)
		return (NULL);

	/* Get the parent node */
	parent = node->parent;

	/* Check if node is the left child of the parent */
	if (node == parent->left)
		/* Return the right child of the parent as the sibling */
		return (parent->right);
	/* Otherwise, node is the right child of the parent */
	else
		/* Return the left child of the parent as the sibling */
		return (parent->left);
}

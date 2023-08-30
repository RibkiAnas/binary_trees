#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary
 * tree
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: The size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	/* Check if tree is NULL */
	if (!tree)
		return (0);

	/* Recursively measure the size of the left and right subtrees */
	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);

	/* Add one for the root node */
	size++;

	/* Return the size of the tree */
	return (size);
}

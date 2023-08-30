#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the
 * number of nodes
 * Return: The number of nodes, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	/* Check if tree is NULL */
	if (!tree)
		return (0);

	/* Check if tree has at least 1 child */
	if (tree->left != NULL || tree->right != NULL)
	{
		/* Recursively count the nodes in the left and right subtrees */
		nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

		/* Add one for the current node */
		nodes++;

		/* Return the number of nodes */
		return (nodes);
	}

	/* Otherwise, tree has no children and is not counted */
	return (0);
}

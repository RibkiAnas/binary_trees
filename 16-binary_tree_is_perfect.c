#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a
 * binary tree
 * @tree: Pointer to the root node of the tree to measure the
 * height
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* Check if tree is NULL */
	if (!tree)
		return (0);

	/* Recursively measure the height of the left and right subtrees */
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	/* Return the maximum of the two heights plus one */
	return (left_height >= right_height ? left_height : right_height);
}

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

/**
 * binary_tree_is_perfect - Function that checks if a binary tree
 * is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, power, i;

	/* Check if tree is NULL */
	if (!tree)
		return (0);

	/* Measure the height and size of the tree */
	height = (int)binary_tree_height(tree) + 1;
	size = (int)binary_tree_size(tree);

	/* Initialize power to 1 */
	power = 1;

	/* Calculate 2^height using a loop */
	for (i = 0; i < height; i++)
		power *= 2;

	/* Check if size equals 2^height - 1 */
	if (size == power - 1)
		return (1);

	/* Otherwise, tree is not perfect */
	return (0);
}

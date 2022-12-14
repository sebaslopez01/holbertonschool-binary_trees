#include "binary_trees.h"


/**
 * binary_tree_height_helper - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The height of the full tree
 */
size_t binary_tree_height_helper(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height_helper(tree->left);
	right_side = binary_tree_height_helper(tree->right);

	if (left_side > right_side)
		return (left_side + 1);

	return (right_side + 1);
}


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height_helper(tree) - 1);
}

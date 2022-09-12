#include "binary_trees.h"


size_t count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}


size_t get_height(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (tree == NULL)
		return (0);

	left_side = get_height(tree->left);
	right_side = get_height(tree->right);

	if (left_side > right_side)
		return (left_side + 1);

	return (right_side + 1);
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t count_left, count_right, height_left, height_right;

	if (tree == NULL)
		return (0);

	count_left = count_nodes(tree->left);
	count_right = count_nodes(tree->right);

	height_left = get_height(tree->left);
	height_right = get_height(tree->right);

	if (count_left == count_right && height_left == height_right)
		return (1);

	return (0);
}

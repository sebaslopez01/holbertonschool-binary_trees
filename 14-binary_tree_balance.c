#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The height of the full tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (left_side > right_side)
		return (left_side + 1);

	return (right_side + 1);
}


/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

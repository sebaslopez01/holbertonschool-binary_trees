#include "binary_trees.h"


/**
 * binary_tree_depth_helper - Measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 *
 * Return: The depth of the binary tree
 */
size_t binary_tree_depth_helper(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_depth_helper(tree->parent));
}


/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 *
 * Return: The depth of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_depth_helper(tree) - 1);
}

#include "binary_trees.h"


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

	return (1 + binary_tree_height(tree->left));
}

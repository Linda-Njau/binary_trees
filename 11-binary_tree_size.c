#include "binary_tree.h"
/**
 * binary_tree_size  - measure size of binary tree
 * @tree: pointer to root node
 * Return: zero or size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}

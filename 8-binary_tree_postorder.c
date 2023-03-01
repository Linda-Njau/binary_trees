#include "binary_trees.h"
/**
 * binary_tree_postorder - transverses using postorder
 * @tree: pointer to root
 * @func: pointer to calling func
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

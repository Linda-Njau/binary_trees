#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts to the right
 * @parent: parent node
 * @value: integer value
 * Return: pointer or failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;

	if (parent == NULL)
		return (NULL);
	rightnode = binary_tree_node(parent, value);
	if (rightnode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		rightnode->right = parent->right;
		parent->right->parent = rightnode;
	}
	parent->right = rightnode;

	return (rightnode);
}

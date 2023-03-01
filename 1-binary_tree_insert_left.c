#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node to the left
 * @parent: parent node
 * @value: integer value
 *
 * Return: pointer or NULL at failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	if (parent == NULL)
		return (NULL);

	leftnode = binary_tree_node(parent, value);
	if (leftnode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		leftnode->left = parent->left;
		parent->left->parent = leftnode;
	}
	parent->left = leftnode;

	return (leftnode);
}

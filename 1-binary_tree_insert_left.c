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

	leftnode = malloc(sizeof(binary_tree_t));
	if (leftnode == NULL)
		return (NULL);

	leftnode->n = value;
	leftnode->parent = parent;
	leftnode->right = NULL;

	if (parent->left != NULL)
	{
		leftnode->left = parent->left;
		parent->left->parent = leftnode;
	}
	parent->left = leftnode;

	return (leftnode);
}

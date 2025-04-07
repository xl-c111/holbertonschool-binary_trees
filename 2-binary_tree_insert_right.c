#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node;
 *         or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;

	if (parent->right == NULL)
	{
		newNode->right = NULL;
		parent->right = newNode;
	}
	else
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
		parent->right = newNode;
	}
	return (newNode);
}

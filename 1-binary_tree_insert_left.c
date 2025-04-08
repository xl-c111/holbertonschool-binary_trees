#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node;
 *         or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;

	if (parent->left == NULL)                    
	{	newNode->left = NULL;                 /* if there is no left child, newNode left ptr must be NULL */
	}
	else
	{
		newNode->left = parent->left;         /* parent->left originally points old left child, now assigns newNode as parent's left child */
		newNode->left->parent = newNode;      /* newNode->left now points to old_left, this line equals to old_left->parent = newNode */
		                                      /* updates old_left's parent ptr to newNode instead of parent */
	}
	parent->left = newNode;               /* assign newNode as the parent's left child */
	return (newNode);
}

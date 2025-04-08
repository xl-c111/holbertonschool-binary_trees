#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 *         NULL - if node is NULL or the parent is NULL
 *              - if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
        /* node->parent points the parent node; node->parent->left points to its left child */
	/* if node->parent->left == node, it means current node is the left child */
	if (node->parent->left == node)         
		return (node->parent->right);
	else
		return (node->parent->left);
}

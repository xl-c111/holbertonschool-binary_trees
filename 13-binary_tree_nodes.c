#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: the number of the nodes with at least 1 child
 *         0 if the tree is NULL
 * 
 * Description: nodes with at least 1 child are non-leaf nodes. if the current
 *              node is neither NULL nor a leaf, it should be a non-leaf node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_nodes_count;
	int right_nodes_count;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_nodes_count = binary_tree_nodes(tree->left);
	right_nodes_count = binary_tree_nodes(tree->right);

	return (left_nodes_count + right_nodes_count + 1);
}

#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: the depth of a node, 0 is the tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int node_depth;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);

	node_depth = binary_tree_depth(tree->parent);  /* if just checking the depth of a single node, recursively upwards follow tree->parent */
	/* if checking the depth of entire tree, need to compare the left_depth and right_depth, depth of entire tree == height of root node */
	return (node_depth + 1);
}

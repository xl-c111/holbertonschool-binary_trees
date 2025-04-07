#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size of a binary tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_count;
	int right_count;

	if (tree == NULL)
		return (0);

	left_count = binary_tree_size(tree->left);
	right_count = binary_tree_size(tree->right);

	return (left_count + right_count + 1);
}

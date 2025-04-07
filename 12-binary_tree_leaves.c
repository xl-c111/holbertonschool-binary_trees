#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: the number of leaves, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_leaves_count = 0;
	int right_leaves_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves_count = binary_tree_leaves(tree->left);
	right_leaves_count = binary_tree_leaves(tree->right);
	return (left_leaves_count + right_leaves_count);
}

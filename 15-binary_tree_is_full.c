#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: always 1 (Success), 0 if the tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full, right_full;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		/* recursively check if left-and right-subtree is full, the result could be 1 or 0 */
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);     
		return (left_full && right_full);    /* if both of them are full, returns 1, otherwise 0 */
	}
	return (0);
}

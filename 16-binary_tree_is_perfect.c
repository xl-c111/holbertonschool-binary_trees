#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: the height of a binary tree, 0 if tree is NULL
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size of a binary tree, 0 if the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  a pointer to the root node of the tree to check
 * Return: Always 1 (Success), otherwise 0
 *         0 if the tree is NULL
 * Description: perfect binary tree: all of its internal nodes have two children;
 *                                   all of its leaf nodes are on the same level(same height)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, count;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	height = binary_tree_height(tree);
	count = binary_tree_size(tree);
        /* if a binary tree is perfect, means its total_nodes = (2^{height + 1} - 1) */
	/* in this case, height is based on edges, height of a leaf is 0 */
	if (count == ((1 << (height + 1)) - 1))    
		return (1);
	else
		return (0);
}

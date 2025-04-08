#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: the height of a binary tree, 0 if tree is NULL
 * Description: there are two ways to measure the height of a binary tree
 *              height == number of edges (leaf node = 0; tree with one node = 0; formula of a perfect tree: 2^{h+1} - 1)
 *              height == number of nodes (leaf node = 1; tree with one node = 1; formula of a perfect tree: 2^{h} - 1)
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)     /* if the node is a single node(leaf node), directly return to its height is 0 */
		return (0);

	left_height = binary_tree_height(tree->left);     /* post-order traversal, recursively compute the left and right subtree */
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height）              
		return (left_height + 1);  /* max (left, right) is the tallest subtree; +1 means the edge connecting this node to its child */
	else
		return (right_height + 1);
}

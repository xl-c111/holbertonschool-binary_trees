#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);                               /* pass the value of current node tree->n to func */
	binary_tree_preorder(tree->left, func);      /* tree->left is the left ptr of current node */
	binary_tree_preorder(tree->right, func);
}

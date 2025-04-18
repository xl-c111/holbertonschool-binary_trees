#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_delete- deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 * Return: nothing
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
        /* recursively delete the left and right subtree, use post-order traversal, left to right -> bottom to up */
	binary_tree_delete(tree->left); 
	binary_tree_delete(tree->right);

	free(tree);
}


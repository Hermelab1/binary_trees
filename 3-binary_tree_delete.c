#include "binary_trees.h"

/**
 * binary_tree_delete - to delete an entire tree
 * @tree: tree to delete
 * Return: no return
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}

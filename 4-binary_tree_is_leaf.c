#include "binary_trees.h"
/**
 * binary_tree_is_leaf - to cheack a tree is leaf
 * @node: node to check
 * Return:1 if it's leaf eas 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}

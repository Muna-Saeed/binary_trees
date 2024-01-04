#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function isleaf
 * @node: the node
 * Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left ==  NULL && node->right == NULL)
		return (1);
	return (0);
}
#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs a post-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: Post-order traversal visits the left subtree,
 * then the right subtree,
 * and finally the current node. The function `func` is called for each node,
 * and the value in the node is passed as a parameter to the function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func); /* Traverse the left subtree */
	binary_tree_postorder(tree->right, func); /* Traverse the right subtree */
	func(tree->n); /* Call the function on the current node */
}

#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs an in-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: In-order traversal visits the left subtree,
 * then the current node,
 * and finally the right subtree. The function `func` is called for each node,
 * and the value in the node is passed as a parameter to the function.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func); /* Traverse the left subtree */
	func(tree->n); /* Call the function on the current node */
	binary_tree_inorder(tree->right, func); /* Traverse the right subtree */
}

read me file for 0x1D. C - Binary trees

# Binary Trees Project

This repository contains C code for basic binary tree operations. The project includes functions for creating, inserting nodes, deleting trees, and various tree traversal methods.

## Data Structures

### Basic Binary Tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Binary Search Tree

```c
typedef struct binary_tree_s bst_t;
```

### AVL Tree

```c
typedef struct binary_tree_s avl_t;
```

### Max Binary Heap

```c
typedef struct binary_tree_s heap_t;
```

**Note:** For tasks 0 to 23 (included), simple binary trees are used, and they are not BSTs, meaning they don't follow any specific rules.

## Print Function

To visualize the trees, you are provided with a print function. This function is only for visualization purposes and is not required for the project.

## Tasks

### 0. New Node

Write a function that creates a binary tree node.

```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

### 1. Insert Left

Write a function that inserts a node as the left-child of another node.

```c
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
```

### 2. Insert Right

Write a function that inserts a node as the right-child of another node.

```c
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```

### 3. Delete

Write a function that deletes an entire binary tree.

```c
void binary_tree_delete(binary_tree_t *tree);
```

### 4. Is Leaf

Write a function that checks if a node is a leaf.

```c
int binary_tree_is_leaf(const binary_tree_t *node);
```

### 5. Is Root

Write a function that checks if a given node is a root.

```c
int binary_tree_is_root(const binary_tree_t *node);
```

### 6. Pre-order Traversal

Write a function that goes through a binary tree using pre-order traversal.

```c
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
```

### 7. In-order Traversal

Write a function that goes through a binary tree using in-order traversal.

```c
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
```

### 8. Post-order Traversal

Write a function that goes through a binary tree using post-order traversal.

```c
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
```

### 9. Height

Write a function that measures the height of a binary tree.

```c
size_t binary_tree_height(const binary_tree_t *tree);
```

### 10. Depth

Write a function that measures the depth of a node in a binary tree.

```c
size_t binary_tree_depth(const binary_tree_t *tree);
```

### 11. Size

Write a function that measures the size of a binary tree.

```c
size_t binary_tree_size(const binary_tree_t *tree);
```

### 12. Leaves

Write a function that counts the leaves in a binary tree.

```c
size_t binary_tree_leaves(const binary_tree_t *tree);
```

### 13. Nodes

Write a function that counts the nodes with at least 1 child in a binary tree.

```c
size_t binary_tree_nodes(const binary_tree_t *tree);
```

### 14. Balance Factor

Write a function that measures the balance factor of a binary tree.

```c
int binary_tree_balance(const binary_tree_t *tree);
```

- `tree`: Pointer to the root node of the tree to measure the balance factor.
- Returns the balance factor of the tree.
- If `tree` is NULL, return 0.

### 15. Is Full

Write a function that checks if a binary tree is full.

```c
int binary_tree_is_full(const binary_tree_t *tree);
```

- `tree`: Pointer to the root node of the tree to check.
- Returns 1 if the tree is full, 0 otherwise.
- If `tree` is NULL, return 0.

### 16. Is Perfect

Write a function that checks if a binary tree is perfect.

```c
int binary_tree_is_perfect(const binary_tree_t *tree);
```

- `tree`: Pointer to the root node of the tree to check.
- Returns 1 if the tree is perfect, 0 otherwise.
- If `tree` is NULL, return 0.

### 17. Sibling

Write a function that finds the sibling of a node.

```c
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
```

- `node`: Pointer to the node to find the sibling.
- Returns a pointer to the sibling node.
- If `node` is NULL or the parent is NULL, return NULL.
- If `node` has no sibling, return NULL.

### 18. Uncle

Write a function that finds the uncle of a node.

```c
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
```

- `node`: Pointer to the node to find the uncle.
- Returns a pointer to the uncle node.
- If `node` is NULL, return NULL.
- If `node` has no uncle, return NULL.

### 19. Lowest Common Ancestor

Write a function that finds the lowest common ancestor of two nodes.

```c
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
```

- `first`: Pointer to the first node.
- `second`: Pointer to the second node.
- Returns a pointer to the lowest common ancestor node of the two given nodes.
- If no common ancestor was found, returns NULL.

### 20. Level-order Traversal

Write a function that goes through a binary tree using level-order traversal.

```c
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
```

- `tree`: Pointer to the root node of the tree to traverse.
- `func`: Pointer to a function to call for each node. The value in the node is passed as a parameter to this function.
- If `tree` or `func` is NULL, does nothing.

### 21. Is Complete

Write a function that checks if a binary tree is complete.

```c
int binary_tree_is_complete(const binary_tree_t *tree);
```

- `tree`: Pointer to the root node of the tree to check.
- Returns 1 if the tree is complete, 0 otherwise.
- If `tree` is NULL, returns 0.

### 22. Rotate Left

Write a function that performs a left-rotation on a binary tree.

```c
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
```

- `tree`: Pointer to the root node of the tree to rotate.
- Returns a pointer to the new root node of the tree once rotated.

### 23. Rotate Right

Write a function that performs a right-rotation on a binary tree.

```c
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
```

- `tree`: Pointer to the root node of the tree to rotate.
- Returns a pointer to the new root node of the tree once rotated.

### 24. Is BST

Write a function that checks if a binary tree is a valid Binary Search Tree (BST).

```c
int binary_tree_is_bst(const binary_tree_t *tree);
```

- `tree`: Pointer to the root node of the tree to check.
- Returns 1 if the tree is a valid BST, 0 otherwise.
- If `tree` is NULL, returns 0.

### 25. BST - Insert
```c
25. BST - Insert
#advanced
Write a function that inserts a value in a Binary Search Tree

Prototype: bst_t *bst_insert(bst_t **tree, int value);
Where tree is a double pointer to the root node of the BST to insert the value
And value is the value to store in the node to be inserted
Your function must return a pointer to the created node, or NULL on failure
If the address stored in tree is NULL, the created node must become the root node.
If the value is already present in the tree, it must be ignored
Your file 0-binary_tree_node.c will be compiled during the correction
```

### 26. BST - Array to BST
```c
26. BST - Array to BST
#advanced
Write a function that builds a Binary Search Tree from an array

Prototype: bst_t *array_to_bst(int *array, size_t size);
Where array is a pointer to the first element of the array to be converted
And size is the number of element in the array
Your function must return a pointer to the root node of the created BST, or NULL on failure
If a value of the array is already present in the tree, this value must be ignored
Your files 111-bst_insert.c and 0-binary_tree_node.c will be compiled during the correction
```

### 27. BST - Search
```c
27. BST - Search
#advanced
Write a function that searches for a value in a Binary Search Tree

Prototype: bst_t *bst_search(const bst_t *tree, int value);
Where tree is a pointer to the root node of the BST to search
And value is the value to search in the tree
Your function must return a pointer to the node containing a value equals to value
If tree is NULL or if nothing is found, your function must return NULL
```

### 28. BST - Remove
```c
28. BST - Remove
#advanced
Write a function that removes a node from a Binary Search Tree

Prototype: bst_t *bst_remove(bst_t *root, int value);
Where root is a pointer to the root node of the tree where you will remove a node
And value is the value to remove in the tree
Once located, the node containing a value equals to value must be removed and freed
If the node to be deleted has two children, it must be replaced with its first in-order successor (not predecessor)
Your function must return a pointer to the new root node of the tree after removing the desired value
```

### 29. Big O #BST
```c
29. Big O #BST
#advanced
What are the average time complexities of those operations on a Binary Search Tree (one answer per line):

Inserting the value n
Removing the node with the value n
Searching for a node in a BST of size n
```

### 30. Is AVL
```c
30. Is AVL
#advanced
Write a function that checks if a binary tree is a valid AVL Tree

Prototype: int binary_tree_is_avl(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to check
Your function must return 1 if tree is a valid AVL Tree, and 0 otherwise
If tree is NULL, return 0
Properties of an AVL Tree:

An AVL Tree is a BST
The difference between heights of left and right subtrees cannot be more than one
The left and right subtrees must also be AVL trees
```

### 31. AVL - Insert
```c
31. AVL - Insert
#advanced
Write a function that inserts a value in an AVL Tree

Prototype: avl_t *avl_insert(avl_t **tree, int value);
Where tree is a double pointer to the root node of the AVL tree for inserting the value
And value is the value to store in the node to be inserted
Your function must return a pointer to the created node, or NULL on failure
If the address stored in tree is NULL, the created node must become the root node.
The resulting tree after insertion, must be a balanced AVL Tree
```

### 32. AVL - Array to AVL
```c
32. AVL - Array to AVL
#advanced
Write a function that builds an AVL tree from an array

Prototype: avl_t *array_to_avl(int *array, size_t size);
Where array is a pointer to the first element of the array to be converted
And size is the number of element in the array
Your function must return a pointer to the root node of the created AVL tree, or NULL on failure
If a value of the array is already present in the tree, this value must be ignored
```

### 33. AVL - Remove

```c
33. AVL - Remove
#advanced
Write a function that removes a node from an AVL tree

Prototype: avl_t *avl_remove(avl_t *root, int value);
Where root is a pointer to the root node of the tree for removing a node
And value is the value to remove in the tree
Once located, the node containing a value equals to value must be removed and freed
If the node to be deleted has two children, it must be replaced with its first in-order successor (not predecessor)
After deletion of the desired node, the tree must be rebalanced if necessary
Your function must return a pointer to the new root node of the tree after removing the desired value, and after rebalancing
Your files 14-binary_tree_balance.c, 103-binary_tree_rotate_left.c and 104-binary_tree_rotate_right.c will be compiled during the correction
```

### 34. AVL - From sorted array

```c
34. AVL - From sorted array
#advanced
Write a function that builds an AVL tree from an array

Prototype: avl_t *sorted_array_to_avl(int *array, size_t size);
Where array is a pointer to the first element of the array to be converted
And size is the number of element in the array
Your function must return a pointer to the root node of the created AVL tree, or NULL on failure
You can assume there will be no duplicate value in the array
You are not allowed to rotate
You can only have 2 functions in your file
Your file 0-binary_tree_node.c will be compiled during the correction
```

### 35. Big O #AVL Tree

```c
35. Big O #AVL Tree
#advanced
What are the average time complexities of those operations on an AVL Tree (one answer per line):

Inserting the value n
Removing the node with the value n
Searching for a node in an AVL tree of size n
Repo:

GitHub repository: binary_trees
File: 125-O
```

### 36. Is Binary heap

```c
36. Is Binary heap
#advanced
Write a function that checks if a binary tree is a valid Max Binary Heap

Prototype: int binary_tree_is_heap(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to check
Your function must return 1 if tree is a valid Max Binary Heap, and 0 otherwise
If tree is NULL, return 0
Properties of a Max Binary Heap:

It’s a complete tree
In a Max Binary Heap, the value at root must be maximum among all values present in Binary Heap
The last property must be recursively true for all nodes in Binary Tree
```

### 37. Heap - Insert

```c
37. Heap - Insert
#advanced
Write a function that inserts a value in Max Binary Heap

Prototype: heap_t *heap_insert(heap_t **root, int value)
Where root is a double pointer to the root node of the Heap to insert the value
And value is the value to store in the node to be inserted
Your function must return a pointer to the created node, or NULL on failure
If the address stored in root is NULL, the created node must become the root node.
You have to respect a Max Heap ordering
You are allowed to have up to 6 functions in your file
Your file 0-binary_tree_node.c will be compiled during the correction
```

### 38. Heap - Array to Binary Heap

```c
38. Heap - Array to Binary Heap
#advanced
Write a function that builds a Max Binary Heap tree from an array

Prototype: heap_t *array_to_heap(int *array, size_t size);
Where array is a pointer to the first element of the array to be converted
And size is the number of element in the array
Your function must return a pointer to the root node of the created Binary Heap, or NULL on failure
Your files 131-heap_insert.c and 0-binary_tree_node.c will be compiled during the correction
```

### 39. Heap - Extract

```c
39. Heap - Extract
#advanced
Write a function that extracts the root node of a Max Binary Heap

Prototype: int heap_extract(heap_t **root);
Where root is a double pointer to the root node of heap
Your function must return the value stored in the root node
The root node must be freed and replace with the last level-order node of the heap
Once replaced, the heap must be rebuilt if necessary
If your function fails, return 0
```

### 40. Heap - Sort

```c
40. Heap - Sort
#advanced
Write a function that converts a Binary Max Heap to a sorted array of integers

Prototype: int *heap_to_sorted_array(heap_t *heap, size_t *size);
Where heap is a pointer to the root node of the heap to convert
And size is an address to store the size of the array
You can assume size is a valid address
Since we are using Max Heap, the returned array must be sorted in descending order
Your file 133-heap_extract.c will be compiled during the correction
```

### 41. Big O #Binary Heap

```c
41. Big O #Binary Heap
#advanced
What are the average
```

## Usage

You can use the provided example programs (e.g., 0-main.c, 1-main.c, etc.) to test and visualize the functionality of the implemented functions.

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
./0-node
```

Feel free to explore and expand upon this project based on your needs!
```

This README provides an overview of the project structure, data structures used, and details about each implemented function.

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

## Usage

You can use the provided example programs (e.g., 0-main.c, 1-main.c, etc.) to test and visualize the functionality of the implemented functions.

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
./0-node
```

Feel free to explore and expand upon this project based on your needs!
```

This README provides an overview of the project structure, data structures used, and details about each implemented function.

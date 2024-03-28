#include "binary_trees.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *binary_tree_insert_right - this function inserts a node to the left of a binary trees
 *@value: this is the child value
 *@parent: this is the parent tree
 *Return : a pointer to the parent of the binary tree
 */ 
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
		binary_tree_t *new_tree = malloc(sizeof(binary_tree_t));
		if (new_tree == NULL)
				return (NULL);
		new_tree->n = value;
		new_tree->right = parent->right;
		new_tree->left = NULL;
		parent->left = NULL;
		parent->right = new_tree;
		return (parent);
}

#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *binary_tree_insert_left - inserts a node to the left of a binary tree
 *@parent: this is the address of the parent node
 *@value: this is the value to assign the new node
 *Return: the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
		binary_tree_t *new_tree = malloc(sizeof(binary_tree_t));

		if (new_tree == NULL)
				return (NULL);
		new_tree->n = value;
		if (parent->right != NULL)
				new_tree->right = parent->right;
		new_tree->left = NULL;
		new_tree->right = NULL;
		parent->right = NULL;
		parent->left = new_tree;
		return (parent);
}

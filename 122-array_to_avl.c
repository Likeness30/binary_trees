#include "binary_trees.h"

/**
 * array_to_avl - This function builds an AVL tree from an array
 * @array: Pointer to the first element of the array to be converted
 * @size: The number of elements in @array
 * Return: A pointer to the root node of the created AVL, else NULL
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t x, y;

	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < x; y++)
		{
			if (array[y] == array[x])
				break;
		}
		if (y == x)
		{
			if (avl_insert(&tree, array[x]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}

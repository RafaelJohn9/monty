#include "monty.h"

/**
 * free_arg:frees argument
 * @array:array to be freed
 * @index:number of items
 */
void free_arg(char **array)
{
	int i = 0;

	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array[i]);
	free(array);
}

/**
 * free_linkedlist:frees allocated memory in a linked list
 * @node-head node
 */
void free_linkedlist(stack_t **node)
{
	stack_t *temp;

	while (*node != NULL)
	{
		temp = *node;
		*node = (*node)->next;
		free(temp);
	}
	free(node);
}

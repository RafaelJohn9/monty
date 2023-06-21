#include "monty.h"

/**
 * push_function:adds element to a stack
 * @arg:argument int to enter
 */
void push_function(stack_t **header, unsigned int i)
{
	stack_t *node;

	printf("success in creating node\n");
	fflush(stdout);
	node = malloc(sizeof(stack_t));
	if (!node)
	{
		perror("error allocating memory for node");
		return;
	}
	node->n = i;
	node->prev = NULL;
	node->next = NULL;
	printf("success in intializing node\n");
	fflush(stdout);
	if (header == NULL || *header == NULL)
	{
		*header = node;
		return;
	}
	else
	{
		node->next = *header;
		(*header)->prev = node;
		*header = node;
		return;
	}
}

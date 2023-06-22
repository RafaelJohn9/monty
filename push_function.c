#include "monty.h"

extern int n;
/**
 * push_function:adds element to a stack
 * @arg:argument int to enter
 */
void push_function(stack_t **header, unsigned int line_num)
{
	stack_t *node;
	int num;

	node = malloc(sizeof(stack_t));
	if (!node)
	{
		perror("Error:malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = n;
	num = n;
	node->prev = NULL;
	node->next = NULL;
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

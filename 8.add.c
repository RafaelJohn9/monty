#include "monty.h"

/**
 * add_function-adds first two nodes
 * @header:head node ptr to ptr
 * @line_num:line number
 */
void add_function(stack_t **header, unsigned int line_num)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		free(header);
		exit(EXIT_FAILURE);
	}
	if ((*header)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		free(header);
		exit(EXIT_FAILURE);
	}
	temp = *header;


#include "monty.h"

/**
 * swap_function-swaps first two nodes
 * @header:head node ptr to ptr
 * @line_num:line number
 */
void swap_function(stack_t **header, unsigned int line_num)
{
	stack_t *temp;
	int num;

	if (*header == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		free(header);
		exit(EXIT_FAILURE);
	}
	if ((*header)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		free_linkedlist(header);
		exit(EXIT_FAILURE);
	}
	temp = *header;
	num = temp->n;
	temp->n = (temp->next)->n;
	(temp->next)->n = num;
}

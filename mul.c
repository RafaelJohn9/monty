#include "monty.h"

/**
 * mul_function-multiplies first two nodes
 * @header:head node ptr to ptr
 * @line_num:line number
 */
void mul_function(stack_t **header, unsigned int line_num)
{
	stack_t *temp;
	int result = 0;

	if (*header == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
		free(header);
		exit(EXIT_FAILURE);
	}
	if ((*header)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
		free_linkedlist(header);
		exit(EXIT_FAILURE);
	}
	result = ((*header)->next)->n;
	result *= (*header)->n;
	temp = *header;
	*header = (*header)->next;
	free(temp);
	(*header)->n = result;
	(*header)->prev = NULL;
}

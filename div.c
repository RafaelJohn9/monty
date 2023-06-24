#include "monty.h"

/**
 * div_function-divides first two nodes
 * @header:head node ptr to ptr
 * @line_num:line number
 */
void div_function(stack_t **header, unsigned int line_num)
{
	stack_t *temp;
	int result = 0;

	if (*header == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		free(header);
		exit(EXIT_FAILURE);
	}
	if ((*header)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		free_linkedlist(header);
		exit(EXIT_FAILURE);
	}
	if ((*header)->n == 0 || (*header)->next->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		free_linkedlist(header);
		exit(EXIT_FAILURE);
	}
	result = ((*header)->next)->n;
	result /= (*header)->n;
	temp = *header;
	*header = (*header)->next;
	free(temp);
	(*header)->n = result;
	(*header)->prev = NULL;
}

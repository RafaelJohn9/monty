#include "monty.h"

/**
 * pop_function-pop nodes
 * @header:head node ptr to ptr
 * @line_num:line number
 */
void pop_function(stack_t **header, unsigned int line_num)
{
	stack_t *temp;

	if (*header == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		free(header);
		exit(EXIT_FAILURE);
	}
	temp = *header;
	*header = (*header)->next;
	free(temp);
}

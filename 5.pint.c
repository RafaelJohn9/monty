#include "monty.h"

/**
 * pint_function- first val at top of the stack
 * @header:head node
 * @line_num: line number
 */
void pint_function(stack_t **header, unsigned int line_num)
{
	if (*header == NULL)
	{
		free(header);
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", (*head)->n);
	}
}

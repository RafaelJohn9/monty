#include "monty.h"

/**
 * sub_function-subs first two nodes
 * @header:head node ptr to ptr
 * @line_num:line number
 */
void sub_function(stack_t **header, unsigned int line_num)
{
	stack_t *temp;
	int sub = 0;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
		free(header);
		exit(EXIT_FAILURE);
	}
	if ((*header)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
		free_linkedlist(header);
		exit(EXIT_FAILURE);
	}
	sub -= (*header)->n;
	sub += ((*header)->next)->n;

	temp = *header;
	*header = (*header)->next;
	free(temp);
	(*header)->n = sub;
	(*header)->prev = NULL;
}

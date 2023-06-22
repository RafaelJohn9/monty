#include "monty.h"

/**
 * pall_function-prints all in stack
 * @header:the ptr to head node ptr
 * @line_number:line number in file
 */
void pall_function(stack_t **header, unsigned int line_num)
{
	stack_t *temp;

	if(!header)
	{
		printf("L%d: empty  list", line_num);
		return;
	}
	temp = *header;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

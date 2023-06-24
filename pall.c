#include "monty.h"

extern char **arg_list;
/**
 * pall_function-prints all in stack
 * @header:the ptr to head node ptr
 * @line_number:line number in file
 */
void pall_function(stack_t **header, unsigned int line_num)
{
	stack_t *temp;

	if (!line_num)
	{
		return;
	}
	if(!(*header))
	{
		return;
	}
	temp = *header;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

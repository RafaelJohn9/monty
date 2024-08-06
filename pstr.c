#include "monty.h"

/**
 * pstr_function-prints all in stack as a string
 * @header:the ptr to head node ptr
 * @line_number:line number in file
 */
void pstr_function(stack_t **header, unsigned int line_num)
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
		if (temp->n == 0 || temp->n > 127)
		{
			printf("\n");
			return;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}

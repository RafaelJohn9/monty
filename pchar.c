#include "monty.h"

/**
 * pchar_function-assigns last node into ascii code and prints it
 * @header:head node ptr to ptr
 * @line_num:line number
 */
void pchar_function(stack_t **header, unsigned int line_num)
{
	int num = (*header)->n;

	if (header == NULL || *header == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		free(header);
		exit(EXIT_FAILURE);
	}
	if (num  < 0|| num > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		free_linkedlist(header);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", num);
}

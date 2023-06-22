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
	int i = 1;

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
	while (arg_list[i] != NULL)
	{
		if (i != 1)
		{
			putchar(' ');
		}
		if ((arg_list[i + 1]) == NULL)
		{
			printf("%s\n", arg_list[i]);
		}
		else
		{
			printf("%s", arg_list[i]);
		}
		i++;
	}

}

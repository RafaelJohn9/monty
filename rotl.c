#include "monty.h"

/**
 * rotl_function- the first becomes the last
 * @header:head node ptr to ptr
 * @line_num:line number
 */
void rotl_function(stack_t **header, unsigned int line_num)
{
	stack_t *end_node;
	stack_t *first_node;

	if (!(*header))
	{
		return;
	}
	if (!line_num)
	{
		return;
	}
	if (!((*header)->next))
	{
		return;
	}
	end_node = *header;
	first_node = *header;

	while(end_node->next != NULL)
	{
		end_node = end_node->next;
	}
	*header = (*header)->next;
	(*header)->prev = NULL;
	end_node->next = first_node;
	first_node->next = NULL;
	first_node->prev = end_node;
}

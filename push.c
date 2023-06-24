#include "monty.h"

extern char **arg_list;
stack_t **head;
/**
 * push_function:adds element to a stack
 * @arg:argument int to enter
 */
void push_function(stack_t **header, unsigned int line_num)
{
	stack_t *node;
	int num;

	if (arg_list[1] == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		free_arg(arg_list);
		free_linkedlist(head);
		exit(EXIT_FAILURE);
	}
	num = atoi(arg_list[1]);
	if (count_int(num) != strlen(arg_list[1]))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		free_arg(arg_list);
		free_linkedlist(head);
		exit(EXIT_FAILURE);
	}
	if (num == 0)
	{
		if (strcmp(arg_list[1], "0") != 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_num);
			free_arg(arg_list);
			free_linkedlist(head);
			exit(EXIT_FAILURE);
		}
	}
	node = malloc(sizeof(stack_t));
	if (!node)
	{
		perror("Error:malloc failed\n");
		free_arg(arg_list);
		free_linkedlist(head);
		exit(EXIT_FAILURE);
	}
	node->n = num;
	node->prev = NULL;
	node->next = NULL;
	if (header == NULL || *header == NULL)
	{
		*header = node;
		return;
	}
	else
	{
		node->next = *header;
		(*header)->prev = node;
		*header = node;
		return;
	}
}

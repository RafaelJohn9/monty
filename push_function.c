#include "monty.h"

/**
 * push_function:adds element to a stack
 * @arg:argument int to enter
 */
void push_function(stack_t **head, unsigned int i)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (!node)
	{
		perror("error allocating memory for node");
		exit(EXIT_FAILURE);
	}
	node->n = i;
	node->prev = NULL;
	node->next = NULL;
	if (*head == NULL || head == NULL)
	{
		*head = node;
		return;
	}
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
		return;
	}
}

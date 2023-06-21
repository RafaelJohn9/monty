#include "monty.h"

stack_t **head = NULL;
/**
 * main-receive argument
 * argc:number of arguments
 * argv:arguments
 * Return:always 0
 */
int main(int argc, char **argv)
{
	 head = malloc(sizeof(stack_t *));
	 if (head == NULL)
	 {
		 fprintf(stderr, "Failed to allocate memory for head\n");
		 exit(EXIT_FAILURE);
	 }
	 *head = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		free(head);
		exit(EXIT_FAILURE);
	}
	else
	{
		fileOpener(argv[1]);
	}
	free_linkedlist(head);
	return (0);
}

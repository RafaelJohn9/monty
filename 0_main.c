#include "monty.h"

stack_t **head;
char **arg_list;
/**
 * main-receive argument
 * argc:number of arguments
 * argv:arguments
 * Return:always 0
 */
int main(int argc, char **argv)
{
	/* number of arguments */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fileExistence(argv[1]);
	fileAccess(argv[1]);

	/* head initialisation */
	 head = malloc(sizeof(stack_t *));
	 if (head == NULL)
	 {
		 fprintf(stderr, "Failed to allocate memory for head\n");
		 exit(EXIT_FAILURE);
	 }
	 *head = NULL;
	 fileOpener(argv[1]);
	 free_linkedlist(head);
	 return (0);
}

#include "monty.h"

extern stack_t **head;
/**
 * @montySyntax:monty keywords are defined here
 * @array:array of words including arguments
 */
int montySyntax(char **array)
{
	instruction_t command_list[] = {
		 {"push", push_function},
		 {NULL, NULL}
	 };
	 int i = 0;
	 long num = 0;
	 char *endptr;

	 while (command_list[i].opcode != NULL)
	 {
		 if (strcmp(array[0], command_list[i].opcode) == 0)
		 {
			 num = strtol(array[1], &endptr, 10);
			 if (array[1] == endptr)
			 {
				 printf("No digits were found.\n");
				 return (-1);
										                
			 }
			 else if (*endptr != '\0')
			 {
				 printf("Invalid character: %c\n", *endptr);
				 return (-1);
			 }
			 command_list[i].f(head, (unsigned int)num);
			 return (0);
		 }
		 i++;
	 }
	 return (1);
}

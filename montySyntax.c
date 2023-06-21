#include "monty.h"

extern stack_t **head;
/**
 * @montySyntax:monty keywords are defined here
 * @array:array of words including arguments
 */
void montySyntax(char **array)
{
	instruction_t command_list[] = {
		 {"push", push_function},
		 {NULL, NULL}
	 };
	 int i = 0;
	 long num = 0;
	 char *endptr;

	 printf("success in monty start\n%s \n%s\n",array[0], array[1]);
	 fflush(stdout);
	 while (command_list[i].opcode != NULL)
	 {
		 if (strcmp(array[0], command_list[i].opcode) == 0)
		 {
			 printf("success in monty\n");
			 fflush(stdout);
			 num = strtol(array[1], &endptr, 10);
			 printf("success in str to int\n");
			 fflush(stdout);
			 if (array[1] == endptr)
			 {
				 printf("No digits were found.\n");
				 return;
										                
			 }
			 else if (*endptr != '\0')
			 {
				 printf("Invalid character: %c\n", *endptr);
				 return;
			 }
			 printf("success in monty.going to cmdlist\n");
			 fflush(stdout);
			 command_list[i].f(head, (unsigned int)num);
			 printf("success in commannd list\n");
			 fflush(stdout);
			 return;
		 }
		 i++;
	 }
	 perror("unknown command");
	 return;
}

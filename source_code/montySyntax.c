#include "monty.h"

/**
 * @montySyntax:monty keywords are defined here
 * @array:array of words including arguments
 */
int montySyntax(char **array, int line_number)
{
	instruction_t command_list[] = {
		 {"push", push_function},
		 {"pall", pall_function},
		 {"pint", pint_function},
		 {"swap", swap_function},
		 {"pop", pop_function},
		 {"add", add_function},
		 {"nop", nop_function},
		 {"sub", sub_function},
		 {"div", div_function},
		 {"mul", mul_function},
		 {"mod", mod_function},
		 {"sub", sub_function},
		 {"pchar", pchar_function},
		 {"pstr", pstr_function},
		 {"rotl", rotl_function},
		 {NULL, NULL}
	 };
	 int i = 0;
	 int count = 0;

	 /* count of tokens */
	 while(array[count] != NULL)
	 {
		 count++;
	 }

	 while (command_list[i].opcode != NULL)
	 {
		 if (array[0][0] == '#')
		 {
			 command_list[6].f(head, line_number);
			 return (0);
		 }
		 else if (strcmp(array[0], command_list[i].opcode) == 0)
		 {
			 if (count > 100)
			 {
				 fprintf(stderr, "L%d: unknown instruction %s", line_number,array[0]);
				 free_arg(arg_list);
				 exit(EXIT_FAILURE);
			 }
			 command_list[i].f(head, line_number);
			 return (0);
		 }
		 i++;
	 }
	 fprintf(stderr, "L%d: unknown instruction %s\n", line_number,array[0]);
	 free_arg(arg_list);
	 exit(EXIT_FAILURE);
}

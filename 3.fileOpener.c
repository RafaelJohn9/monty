#include "monty.h"

char **arg_list;
extern stack_t **head;
/**
 * fileOpener:checks and opens file
 * @filePath: file to be opened or checked existence
 */
void fileOpener(char *file)
{
	FILE *fileContent;
	char line[100];
	int line_number = 0;

	fileContent = fopen(file, "r");
	if (fileContent == NULL)
	{
		fprintf(stderr, "Could not open file %s.\n", file);
		free_linkedlist(head);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), fileContent) != NULL)
	{
		line_number++;
		/* remember to free */
		arg_list = tokenizer(line);
		if (arg_list == NULL)
		{
			continue;
		}
		montySyntax(arg_list, line_number);
		free_arg(arg_list);
	}
	fclose(fileContent);
}

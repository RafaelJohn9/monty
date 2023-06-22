#include "monty.h"
char **arg_list;

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
	}
	fclose(fileContent);
}

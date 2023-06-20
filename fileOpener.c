#include "monty.h"
/**
 * fileOpener:checks and opens file
 * @filePath: file to be opened or checked existence
 */
void fileOpener(char *file)
{
	FILE *fileContent;
	char line[100];

	fileContent = fopen(file, "r");
	if (fileContent == NULL)
	{
		fprintf(stderr, "Could not open file %s.\n", file);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), fileContent) != NULL)
	{
		printf("success in fileopener\n");
		fflush(stdout);
		lineBreaker(line);
	}
	fclose(fileContent);
}

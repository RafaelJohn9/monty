#include "monty.h"

/**
 * main-receive argument
 * argc:number of arguments
 * argv:arguments
 * Return:always 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		fileOpener(argv[1]);
	}
	return (0);
}

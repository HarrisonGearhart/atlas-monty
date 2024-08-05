#include "monty.h"
/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: argument value (monty file name)
 * Return: 0 if successful 
*/
cmd_t cmd = {NULL, NULL, NULL, NULL, 0};

int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	stack_t *stack = NULL;
	ssize_t read_line = 1;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	cmd.file = file;

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		cmd.content = content;
		counter++;

		if (read_line > 0)
			execute(content, &stack, counter, file);

		free(content);
	}

	free_stack(stack);
	fclose(file);
	return (0);
}
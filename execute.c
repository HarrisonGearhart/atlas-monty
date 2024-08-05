#include "monty.h"
/**
 * execute - execute opcode
 * @stack: stack of linked list
 * @line_count: line counter
 * @file: pointer to monty file stream
 * @content: line content
 * Return: None
 */
int execute(char *content, stack_t **stack, unsigned int line_count, FILE *file)
{
	instruction_t opst[] = {
							{"push", _push},
							{"pall", _pall},		
							};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	cmd.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, line_count);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s \n", line_count, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
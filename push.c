#include "monty.h"
/**
 * _push - function that adds node to the stack
 * @head: double pointer to head of stack
 * @line_count: line counter
 * Return: void
*/
void _push(stack_t **head, unsigned int line_count)
{
	int n, i, flag = 0;

	i = 0;
	if (cmd.arg)
	{
		if (cmd.arg[0] == '-')
			i++;
		for (; cmd.arg[i] != '\0'; i++)
		{
			if (cmd.arg[i] > 57 || cmd.arg[i] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_count);
			fclose(cmd.file);
			free(cmd.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}		

	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_count);
		fclose(cmd.file);
		free(cmd.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(cmd.arg);

	if (cmd.lifi == 0)
		addnode(head, n);
	else
		add_queue(head, n);	
}

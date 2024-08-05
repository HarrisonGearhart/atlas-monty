#include "monty.h"
/**
 * _pint - prints the top
 * @head: stack head
 * @line_count: line counter
 * Return: Void
*/
void _pint(stack_t **head, unsigned int line_count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_count);
		fclose(cmd.file);
		free(cmd.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

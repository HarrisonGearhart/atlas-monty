#include "monty.h"
/**
 * _pop - prints the top
 * @head: stack head
 * @line_count: line counter
 * Return: Void
*/
void _pop(stack_t **head, unsigned int line_count)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_count);
		fclose(cmd.file);
		free(cmd.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

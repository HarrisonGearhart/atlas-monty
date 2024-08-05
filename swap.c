#include "monty.h"
/**
 * _swap - adds the top 2 elements of the stack
 * @head: Stack head
 * @line_count: line counter
 * Return: Void
*/
void _swap(stack_t **head, unsigned int line_count)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while(h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_count);
		fclose(cmd.file);
		free(cmd.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}

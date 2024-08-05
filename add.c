#include "monty.h"
/**
 * adds top 2 elements of the stack
 * @head: stack head
 * @line_count: line counter
 * Return: void
*/
void _add(stack_t **head, unsigned int line_count)
{
	stack_t *tmp;

	int len = 0, aux;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_count);
		fclose(cmd.file);
		free(cmd.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	aux = tmp->n + tmp->next->n;
	tmp->next->n = aux;
	*head = tmp->next;
	free(tmp);
}
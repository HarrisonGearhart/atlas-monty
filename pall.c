#include "monty.h"
/**
 * _pall - prints everything in the stack
 * @head: double pointer to first node
 * @line_count: line counter(not used)
 * Return: none
*/
void _pall(stack_t **head, unsigned int line_count)
{
	stack_t *h;
	(void)line_count;

	h = *head;
	if ((h = NULL))
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

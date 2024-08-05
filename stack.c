#include "monty.h"
/**
 * free_stack - free doubly linked list
 * @head: first node of stack
 * Return: none
*/

void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
/**
 * _stack - free stack
 * @head: first node(unused)
 * @line_count: line counter
 * Return: Void
*/
void _stack(stack_t **head, unsigned int line_count)
{
	(void)head;
	(void)line_count;

	cmd.lifi = 0;
}

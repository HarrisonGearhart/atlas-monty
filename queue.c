#include "monty.h"
/**
 * _queue - prints to the top
 * @head: stack head (unused)
 * @line_count: line counter (unused)
 * Return: Void
*/
void _queue(stack_t **head, unsigned int line_count)
{
	(void)head;
	(void)line_count;

	cmd.lifi = 1;
}
/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of stack
 * Return: No Return
*/
void add_queue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc (sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}

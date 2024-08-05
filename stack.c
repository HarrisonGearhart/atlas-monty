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

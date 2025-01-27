#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct cmd_s
{
        char *arg;
        FILE *file;
        char *content;
        int lifi;
} cmd_t;
extern cmd_t cmd;

void _push(stack_t **head, unsigned int line_count);
void _pall(stack_t **head, unsigned int line_count);
void _queue(stack_t **head, unsigned int line_count);
void _pint(stack_t **head, unsigned int line_count);
void _pop(stack_t **head, unsigned int line_count);
void _swap(stack_t **head, unsigned int line_count);
void _add(stack_t **head, unsigned int line_count);

void addnode(stack_t **head, int n);
int execute(char *content, stack_t **stack, unsigned int line_count, FILE *file);
void free_stack(stack_t *head);
void add_queue(stack_t **head, int n);

#endif

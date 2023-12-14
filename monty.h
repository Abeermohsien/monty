#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

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

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);

void o_file(char *fn);
int p_line(char *buf, int n, int m);
void read_f(FILE *);
int len_chars(FILE *);
void _exe(char *, char *, int, int);

stack_t *add_node(int n);
void free_stack(void);
void _pall(stack_t **, unsigned int);
void _push(stack_t **, unsigned int);
void add_queue(stack_t **, unsigned int);

void f_call(op_func, char *, char *, int, int);

void _pint(stack_t **, unsigned int);
void _pop(stack_t **, unsigned int);
void _nop(stack_t **, unsigned int);
void _swap(stack_t **, unsigned int);

void _add(stack_t **, unsigned int);
void _sub(stack_t **, unsigned int);
void _div(stack_t **, unsigned int);
void _mul(stack_t **, unsigned int);
void _mod(stack_t **, unsigned int);

void _pchar(stack_t **, unsigned int);
void p_str(stack_t **, unsigned int);
void rot1(stack_t **, unsigned int);

void err(int error, ...);
void rot2(stack_t **, unsigned int);

#endif

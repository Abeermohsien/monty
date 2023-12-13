#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#define _POSIX_C_SOURCE 200809L

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
 * struct st - variables arguments, file and line
 * @arg: arguments
 * @file: file
 * @content: line content
 * @lifi: flag changes from and to stack and Queue
 */
typedef struct st_s
{
	FILE *file;
	char *arg;
	char *content;
	int lifi;
} st_t;
extern st_t st;
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
void add_node(stack_t **h, int n);
void _pall(stack_t **h, unsigned int n);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void _push(stack_t **h, unsigned int n);
void _pall(stack_t **h, unsigned int n);
void _pint(stack_t **h, unsigned int c);
int _exe(char *content, stack_t **h, unsigned int c, FILE *f);
void free_stack(stack_t *h);
void _pop(stack_t **h, unsigned int c);
void _swap(stack_t **h, unsigned int n);
void _add(stack_t **h, unsigned int c);
void _nop(stack_t **h, unsigned int c);
void _sub(stack_t **h, unsigned int n); 
void _rot1(stack_t **h, unsigned int n);
void _rot2(stack_t **h, __attribute__((unused)) unsigned int c);
void add_queue(stack_t **h, int n);
void _queue(stack_t **h, unsigned int c);
void print_top(stack_t **h, unsigned int n);
#endif

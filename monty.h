#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

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
 * struct st_s - variables arguments, file and line
 * @arg: arguments
 * @file: file
 * @content: line content
 * @lifi: flag changes from and to stack and Queue
 */
typedef struct st_s
{
	char *arg;
	FILE *file;
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

extern stack_t *head;
typedef void (*op_func)(stack_t **

void _print(stack_t **h, unsigned int c);
void _pall(stack_t **h, unsigned int c);
void push(stack_t **h, __attribute__((unused)) unsigned int c);
void open_file(char *fn);
void read_f(FILE *df);
int _exe(char *op, char *val, int len, int m);
int p_line(char *buf, int n, int m);
void f_call(op_func f, char *oper, char *val, int len, int fr);
void rot1(stack_t **h, __attribute__((unused)) unsigned int n);
void rot2(stack_t **h, __attribute__((unused)) unsigned int c);
void _mul(stack_t **h, unsigned int c);
void _mod(stack_t **h, unsigned int c);
void add_queue(stack_t **h, int n);
void free_stack(void);
void add_node(int n);
void add_queue(stack_t **h, __attribute__((unused)) unsigned int n);
void _swap(stack_t **h, unsigned int n);
void _sub(stack_t **h, unsigned int n);
void print_top(stack_t **h, unsigned int n);
void _queue(stack_t **h, unsigned int c);
void p_str(stack_t **stack, __attribute__((unused))unsigned int ln);
void _pop(stack_t **h, unsigned int c);
void _pchar(stack_t **stack, unsigned int ln);
void _nop(stack_t **h, unsigned int c);
int main(int argc, char *argv[]);
void free_stack(stack_t *h);
void _div(stack_t **h, unsigned int c);
void add_node(stack_t **h, int n);
void _add(stack_t **h, unsigned int c);
#endif

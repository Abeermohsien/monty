#include "monty.h"
/**
 * _pchar - print char at top of stack,
 * followed by a new line
 * @h: head of stack
 * @c: line number
 * Return: void
*/
void _pchar(stack_t **stack, unsigned int ln)
{
	int ascii;

	if (stack == NULL || *stack == NULL)
		string_err(11, ln);

	ascii = (*stack)->n;
	if (ascii < 0 || > 127)
		string_err(10, ln);
	printf("%c\n", ascii);
}

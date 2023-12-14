#include "monty.h"
/**
 * _pchar - print char at top of stack,
 * followed by a new line
 * @tack: head of stack
 * @n: line number
 * Return: void
*/
void _pchar(stack_t **tack, unsigned int n)
{
	int sc;

	if (tack == NULL || *tack == NULL)
	{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", n);
	free_stack();
	exit(EXIT_FAILURE);
	}
	sc = (*tack)->n;
	if (sc < 0 || sc > 127)
	{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", n);
	free_stack();
	exit(EXIT_FAILURE);
	}
	printf("%c\n", sc);
}

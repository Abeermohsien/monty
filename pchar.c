#include "monty.h"
/**
 * _pchar - print char at top of stack,
 * followed by a new line
 * @h: head of stack
 * @c: line number
 * Return: void
*/
void _pchar(stack_t **h, unsigned int c)
{
	stack_t *i;

	i = *head;
	if (!i)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", c);
		fclose(st.file);
		free(st.c);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	if (i->n > 127 || i->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", c);
		fclose(st.file);
		free(st.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", i->n);
}

#include "monty.h"
/**
 * _pint - print top of stack
 * @h: stack head
 * @c: line number
 * Return: void
*/
void _pint(stack_t **h, unsigned int c)
{
	if (h == NULL || *h == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", c);
		free_stack();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}

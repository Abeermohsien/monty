#include "monty.h"
/**
 * _pint - print top of stack
 * @h: stack head
 * @c: line number
 * Return: void
*/
void _pint(stack_t **h, unsigned int c)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't print, stack is empty\n", c);
		fclose(st.file);
		free(st.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}

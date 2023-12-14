#include "monty.h"
/**
 * _mul - multiplies top two elements of the stack.
 * @h: head of the stack
 * @counter: line number
 * Return: void
*/
void _mul(stack_t **h, unsigned int c)
{
	stack_t *i;
	int length = 0, ax;

	i = *h;
	while (i)
	{
		i = i->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", c);
		fclose(st.file);
		free(st.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	i = *head;
	ax = i->next->n * i->n;
	i->next->n = ax;
	*h = i->next;
	free(i);
}

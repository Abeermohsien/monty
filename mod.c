#include "monty.h"
/**
 * _mod - the rest of compute division of the second
 * top element of stack by the top element
 * @h: head of stack
 * @c: line number
 * Return: void
*/
void _mod(stack_t **h, unsigned int c)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", c);
		fclose(st.file);
		free(st.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	i = *h;
	if (i->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", c);
		fclose(st.file);
		free(st.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	ax = i->next->n % i->n;
	i->next->n = ax;
	*h = i->next;
	free(i);
}

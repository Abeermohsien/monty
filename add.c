#include "monty.h"
/**
 * _add - add to the top of the stack
 * @h: head of the stack
 * @n: line number
 * Return: void
 */

void _add(stack_t **h, unsigned int c)
{
	stack_t *hh;
	int l = 0, ax;

	hh = *h;
	while (hh)
	{
		hh = hh->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", c);
		fclose(st.file);
		free(st.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	hh = *h;
	ax = hh->n + hh->next->n;
	hh->next->n =ax;
	*h = hh->next;
	free(hh);
}

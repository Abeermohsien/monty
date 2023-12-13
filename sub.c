#include "monty.h"
/**
 * _sub - munas
 * @h: head
 * @n: line number
 * Return: void
 */
void _sub(stack_t **h, unsigned int n)
{
	int node, i;
	stack_t *tmp;

	tmp = *h;
	for (node = 0; tmp != NULL; node++)
		tmp = tmp->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", n);
		fclose(st.file);
		free(st.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	i = tmp->next->n - tmp->n;
	tmp->next->n = i;
	*h = tmp->next;
	free(tmp);
}

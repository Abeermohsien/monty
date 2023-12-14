#include "monty.h"
/**
 * _sub - munas
 * @h: head
 * @n: line number
 * Return: void
 */
void _sub(stack_t **h, unsigned int n)
{
	int i;
	stack_t *tmp;
	
	tmp = *h;	
	if (h == NULL || *h == NULL || (*h)->next == NULL) 
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", n);	
		free_stack();
		exit(EXIT_FAILURE);
	}
	i = tmp->next->n - tmp->n;
	tmp->next->n = i;
	*h = tmp->next;
	free(tmp);
	(*h)->prev = NULL;
}

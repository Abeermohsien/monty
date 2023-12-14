#include "monty.h"
/**
 * _rot1 - rotayes the stack
 * @h: head
 * @n: line number
 * Return: void
 */
void _rot1(stack_t **h, __attribute__((unused))unsigned int n)
{
	stack_t *t;

	if (h == NULL || *h == NULL || (*h)->next == NULL)
		return;
	t = *h;
	while (t->next != NULL)
		t = t->next;

	t->next = *h;
	(*h)->prev = t;
	*h = (*h)->next;
	(*h)->prev->next = NULL;
	(*h)->prev = NULL;
}

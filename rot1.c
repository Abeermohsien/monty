#include "monty.h"
/**
 * _rot1 - rotayes the stack
 * @h: head
 * @n: line number
 * Return: void
 */
void _rot1(stack_t **h, __attribute__((unused))unsigned int n)
{
	stack_t *t, *node;

	t = *h;
	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}
	node = (*h)->next;
	node->prev = NULL;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = *h;
	(*h)->next = NULL;
	(*h)->prev = t;
	(*h) = node;
}

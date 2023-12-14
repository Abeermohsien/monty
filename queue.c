#include "monty.h"

/**
 * add_queue - add node to the queue tail
 * @h: header pointer
 * @n: new value
 * Return: void
 */
void add_queue(stack_t **h, __attribute__((unused))unsigned int n)
{
	stack_t *ax;

	if (h == NULL || *h == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *h;
		return;
	}
	ax = head;
	while (ax->next != NULL)
		ax = ax->next;

	ax->next = *h;
	(*h)->prev = ax;
}

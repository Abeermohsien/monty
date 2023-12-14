#include "monty.h"

/**
 * _push - push node into the stack
 * @h: head pointer
 * @c: line number
 * Return: void
 */
void _push(stack_t **h, __attribute__((unused))unsigned int c)
{
	stack_t *ptr;

	if (h == NULL || *h == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *h;
		return;
	}
	ptr = head;
	head = *h;
	head->next = ptr;
	ptr->prev = head;
}

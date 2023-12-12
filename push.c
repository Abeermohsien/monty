#include "monty.h"
/**
 * _push - push node into the stack
 * @h: head pointer
 * @n: line number
 * Return: void
 */
void _push(stack_t **h, unsigned int n)
{
	int i, j = 0, f = 0;

	if (st.arg)
	{
		if (st.arg[0] == '-')
			j++;
		for (; st.arg[j] != '\0'; j++)
		{


#include "monty.h"

/**
 * p_str - prints a string
 * @stack: pointer to pointer pointing top node of stack
 * @ln: integer representing line number fo opcode.
 */
void p_str(stack_t **stack, __attribute__((unused))unsigned int ln)
{
	int sc;
	stack_t *t;

	if (stack == NULL || *stack == NULL)
	{
		printf("\n");
		return;
	}

	t = *stack;
	while (t != NULL)
	{
		sc = t->n;
		if (sc <= 0 || sc > 127)
			break;
		printf("%c", sc);
		t = t->next;
	}
	printf("\n");
}

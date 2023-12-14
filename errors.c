#include "monty.h"

/**
 * err: error
 * @error: error codw 
 */
void err(int error, ...)
{
	va_list ag;
	char *op;
	int num;

	va_start(ag, error);
	switch (error)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: Can't open file %s\n",
				va_arg(ag, char *));
			break;
		case 3:
			num = va_arg(ag, int);
			op = va_arg(ag, char *);
			fprintf(stderr, "L%d: unknown instruction %s\n", num, op);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%d: usage: push integer\n", va_arg(ag, int));
			break;
		default:
			break;
	}
	free_stack();
	exit(EXIT_FAILURE);
}

/**
 * more_err - handles errors.
 * @error: error code 
 */
void more_err(int error, ...)
{
	va_list ag;
	char *op;
	int num;

	va_start(ag, error);
	switch (error)
	{
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n",
				va_arg(ag, int));
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n",
				va_arg(ag, int));
			break;
		case 8:
			l_num = va_arg(ag, unsigned int);
			op = va_arg(ag, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", num, op);
			break;
		case 9:
			fprintf(stderr, "L%d: division by zero\n",
				va_arg(ag, unsigned int));
			break;
		default:
			break;
	}
	free_stack();
	exit(EXIT_FAILURE);
}

/**
 * string_err - handles errors.
 * @error: error code 
 */
void string_err(int error, ...)
{
	va_list ag;
	int num;

	va_start(ag, error);
	num = va_arg(ag, int);
	switch (error)
	{
		case 10:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", num);
			break;
		case 11:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", num);
			break;
		default:
			break;
	}
	free_stack();
	exit(EXIT_FAILURE);
}

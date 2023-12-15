#include "monty.h"

/**
 * pint - Prints value at the top of stack.
 * @stack: Double pointer to the top of stack.
 * @line_number: Line number in monty byte code.
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't j-pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

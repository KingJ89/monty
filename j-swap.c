#include "monty.h"

/**
 * swap - swaps top two of the stack.
 * @stack: Double pointer.
 * @line_number: number in the monty byte code file
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%uU: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);

	}

	temp = (*stack)->n;
(*stack)->n = (*stack)->next->;
(*stack)->next->n = temp;
}

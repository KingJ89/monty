#include "monty.h"

/**
 * add - adds the 2 top elems.
 * @stack: double pointer
 * @line_number: line number in monty byte code.
 */

void add(stack_t **stack, unsigned int line_number)
{
	int sum;

	 if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
	 sum = (*stack)->n + (*stack)->next->n;
	 pop(stack, line_number);
	 (*stack)->n = sum;
}

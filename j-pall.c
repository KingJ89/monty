#include "monty.h"

/**
 * pall - prints values for stack layers.
 * @stack: double pointer to the top of the stack.
 * @line_number: number in monty bytecode file.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	
	(void)line_number;

	if (!stack || !(*stack))
		return;

	current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

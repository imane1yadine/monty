#include "monty.h"

/**
 * op_pall - prints all values on the stack
 * @stack: pointer to the top of the stack
 * @counter: no used
 * Return: no return
*/

void op_pall(stack_t **stack, unsigned int counter)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		(void)counter;
	}

}

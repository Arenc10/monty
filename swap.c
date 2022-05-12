#include "monty.h"
/**
 * _swap - Function that swap top two elemnts of stack
 * @top: First node
 * @line: Second operand
 */
void _swap(stack_t **top, __attribute__((unused)) unsigned int line)
{
	int temp;

	if (*top == NULL || (*top)->next == NULL)
	{
		printf("L<line_number>: can't swap, stack too short");
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = (*top)->n;
		(*top)->n = (*top)->next->n;
		(*top)->next->n = temp;
	}
}

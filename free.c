#include "monty.h"
/**
 * _free - Function that frees elements of a stack
 * @top: First operand
 * @line: Second operand
 */
void _free(stack_t *top)
{
	stack_t *temp;

	if (top == NULL)
		return;
	while (top != NULL)
	{
		temp = top;
		top = (top)->next;
		free(temp);
	}
	free(top);
}

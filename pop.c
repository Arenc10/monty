#include "monty.h"
/**
 *_pop - function that deletes the top element
 *@top - First operand top of the stack
 *@line: Second operand int
 */
void _pop(stack_t **top, __attribute__((unused)) unsigned int line)
{
	stack_t *temp;

	if (*top == NULL)
		printf("Error\n");
	(*top)->next = temp;
	free(*top);
	*top = temp;
}

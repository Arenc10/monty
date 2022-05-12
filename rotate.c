#include "monty.h"
/**
 * _rotl - Function that puts the first node to the end
 * @top: First node
 * @line: Second operand an int
 */
void _rotl(stack_t **top, __attribute__((unused)) unsigned int line)
{
	stack_t *temp, *second, *last;

	if (*top == NULL || (*top == NULL && (*top)->next == NULL))
		return;
	second = *top;
	temp = *top;
	last = *top;

	while (last != NULL)
		last = last->next;

	second = (*top)->next;
	temp->next = NULL;
	temp->prev = last;
	last->next = temp;
	second->prev = NULL;
	*top = second;
	

}

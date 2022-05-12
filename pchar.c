#include "monty.h"
/**
 * _pchar - Function that prints first char of the top
 * @top - First operand node
 * @line - Second operand
 */
void _pchar(stack_t **top, unsigned int line)
{
	int asci = (*top)->n;
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty", line);
		exit(EXIT_FAILURE);
	}
	if (asci < 0 || asci > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range", line);
		exit(EXIT_FAILURE);
	}
	putchar(asci);
	putchar('\n');
}

#include "monty.h"
/**
 * invalid_instruction_error - Function that checks input and whether is an error or not
 * @token - First operand
 * @line - Second operand
 */
void invalid_instruction_error(char *token, unsigned int line)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, token);
	exit(EXIT_FAILURE);
}

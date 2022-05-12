#include "monty.h"
void (*get_op_code(char *token, __attribute__((unused))unsigned int line))(stack_t **, unsigned int)
{
	int i;
	instruction_t operation[] = {
		{"push", _push},
		{"pop", _pop},
		{"pint", _pint},
		{"pall", _pall},
		{"swap", _swap},
		{"add", _add},
		{"div", _div},
		{"sub", _sub},
		{"mul", _mul},
		{"mod", _mod},
		{NULL, NULL}
	};
	for (i = 0; operation[i].opcode != NULL; i++)
		if (strcmp(token, operation[i].opcode) == 0)
			return (operation[i].f);
	return (NULL);
}
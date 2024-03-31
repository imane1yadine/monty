#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

void op_push(stack_t **stack, unsigned int counter);
void op_pall(stack_t **stack, unsigned int counter);
void op_pint(stack_t **stack, unsigned int counter);


#endif /* monty.h */

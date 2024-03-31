#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>


stack_t *add_node(stack_t **stack, const int n);
void op_push(stack_t **stack, unsigned int counter);
void op_pall(stack_t **stack, unsigned int counter);
void op_pint(stack_t **stack, unsigned int counter);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void free_stack(stack_t *stack);
int main(int argc, char *argv[])

#endif /* monty.h */

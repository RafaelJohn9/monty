#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

extern stack_t **head;
extern char **arg_list;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *my_strdup(const char *str);
int fileExistence(char *file);
int fileAccess(char *file);
void free_arg(char **array);
void free_linkedlist(stack_t **node);
int montySyntax(char **array, int line_number);
void fileOpener(char *file);
char **tokenizer(char *line);
long unsigned int count_int(int num);





void push_function(stack_t **header, unsigned int line_num);
void pall_function(stack_t **header, unsigned int line_num);
void pint_function(stack_t **header, unsigned int line_num);
void swap_function(stack_t **header, unsigned int line_num);
void pop_function(stack_t **header, unsigned int line_num);
void add_function(stack_t **header, unsigned int line_num);
void nop_function(stack_t **header, unsigned int line_num);
void sub_function(stack_t **header, unsigned int line_num);
void div_function(stack_t **header, unsigned int line_num);
void mul_function(stack_t **header, unsigned int line_num);
void mod_function(stack_t **header, unsigned int line_num);
void pchar_function(stack_t **header, unsigned int line_num);
void pstr_function(stack_t **header, unsigned int line_num);
void rotl_function(stack_t **header, unsigned int line_num);
#endif

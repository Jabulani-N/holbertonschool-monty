#include "main.h"

struct global_s glob;

/**
 * main - Entry point for monty
 * @argc: arg count
 * @argv: array of input args
 * Return: Always 0 on completion, otherwise 1 on exit fail
 */

/*this int main has input arguemnts*/
/*main.c wants to recieve a single file and nothing else*/
/*we're gonna pass it the bytecode files*/
/*	those files pass the actual in*/
int main(int argc, char *argv[])
{
  stack_t *stack_prime = NULL;
  FILE *inbound_file = NULL;
  size_t n = 0;
  char *line_buff = NULL;
  const char delims[] = " \t\n";
/*only function if got one argument (program call is also 1, so argc = 2)*/
  if (argc != 2)
    { /*if we did not get 1 argument, exit error*/
      fprintf(stderr, "USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }
  inbound_file = fopen(argv[1], "r");/*make a note of recieved file*/
  if (!(inbound_file))
    { /*if we fail to open file, exit error*/
      fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
      exit(EXIT_FAILURE);
    }
  glob.file_ref = inbound_file;/*actually store the file in global struct*/
  glob.op_line = 0;/*start at the first line of the opcode file?*/
  while (getline(&line_buff, &n, inbound_file) != -1)/*go again until we have an invalid code line (reached end of code)*/
    tokentime(line_buff, delims, &stack_prime);/*tokentime gets current line's words(?), delims, and the file. */
  /*with those, it moves to next line, and passes the buck again*/
/*			delims seems to be being used to pass which characters to treat differntly.*/
 /*			it is declared with other varibales*/
  free_stack(&stack_prime, NULL);
  return (0);
}

/**
 * main - recieve 1 file name as argument
 * @argc: number of arguments.
 * 	1 at 0 arguments after program's own name
 * 	is 2 if we recieved 1 argument after the call name
 * @argv: array of input arguments
 * return: 
 */

/* it looks like i have to declare the global struct here too?*/

#include "monty.h"

global_t glob;

int main (int argv, char *argc[])
{
	FILE *inbound_file;

	if (argv != 2) /*now we know we only got 1 argument*/
	{
		fprintf(stderr,"Usage: monty file\n");
		exit(EXIT_FAILURE);
	}
	inbound_file = fopen(argc[1], "r");/*read-only*/
	if (!(inbound_file))/*if failed to open file*/
	{
		fprintf(stderr, "Error: can't open file %s\n",argc[1]);
		exit(EXIT_FAILURE);
	}
	printf("recieved file %s\n", argc[1]);
	return(EXIT_SUCCESS);
}


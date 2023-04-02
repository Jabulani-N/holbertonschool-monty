

# main.h

declares `extern struct structType structName` to create a globally accessible variable of type structType

theirs is done as

`typedef struct global_s`

`{`

`  char *op_code;`

`  char *op_arg;`

`  unsigned int op_line;`

`  char *line_ref;`

`  FILE *file_ref;`

`} global_t;`

so it is ready to hold the input file as soon as main.c is called

- because main.c includes it

# main.c

main.c recieves the arguments used, via argc and argv

- we'll have it check the number of arguments to assure we only got one

- then we try to open the file and return error if we can't

- we'll send that file, line by line, to the functions

- - we'll need a function to sort which funciton is being called

- - then we'll have the functions that actually do the tasks like push




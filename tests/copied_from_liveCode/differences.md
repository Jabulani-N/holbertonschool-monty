

# main.h

declares `extern struct structType structName` to create a globally accessible variable of type structType

theirs is done as

`typedef struct global_s
{
  char *op_code;
  char *op_arg;
  unsigned int op_line;
  char *line_ref;
  FILE *file_ref;
} global_t;

`


# holbertonschool-monty
0x19. C - Stacks, Queues - LIFO, FIFO

# Resources

[thing that helps make sure your error messages actually go to stderr](https://github.com/sickill/stderred)

# Task 0 - Push, Pall

we want an "opcode" called "push" that pushes an element to the stack

- **reminder: "stack" is a linked list structure that we defined in header monty.h** 

we want another "opcode" called "pall" that Prints All values in the stack, from top (last?) to bottom

## To-Do

**Learn how to create an opcode**

- Opcodes seem to mean codes that work when in the main terminal you say "codeName argument" and it just goes.

- - like how we do "betty file" or "valgrind ./a.out"

**Learn how to make a variable or mallocced memory accessible from any program**.

- in order to have all of "push", "pall", and free as independant opcodes.

- - they need to be able to work without any of the others telling them

- - - possibly, the "push" opcode that creates the "stack" can declare another variable with a set name that holds the address of the malloced stack




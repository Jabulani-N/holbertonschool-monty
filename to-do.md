# To-Do List

### [✓] Create testing subfolder

I also created a hardlink (symlink didn't have permission, which in hindsight is probably beuase I changed original file permissoins instead of hte symlink's permissions) between that folder and the pproject folder

- ln -iv source/address link/target/address

### [\_] Learn how to create an opcode

- this can be tested with a "_echo" opcode that prints 1 argument I give it

The following creates a disassembly of the code. it is not what we're looking for

it is, however, teh same thing the pre-tasks example does, so it's worth keeping for reference

- first `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 fileName -c`

- then `objdump -D fileName.oInsteadOf.c`



### Test your opcode compilation with a "\_echo" that printf's what you give it

### [\_] Learn how to share varaibles

test in a subfolder with a simple main and function file that prints a var declared outside itself.



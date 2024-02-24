## Usage

The project includes C source files that contain our reimagined functions. The `libft` header file comprises function prototypes, necessary includes, and a structure.

### Creating the Library

You can generate the `libft` library using the provided Makefile rules. Here are some essential make commands:

- `make`: This command creates `libft.a` using all source files except those with "_bonus" in their filenames.

- `make bonus`: This command to include bonus files in your library.

- `make fclean`: This command is used to clean up object files and the library itself.

*This project has been created as part of the 42 curriculum by vmistry*

# ft_printf

## Description

This project is my own implementation of the C `printf` function, a versatile tool for formatted output. The goal is to create a static library, `libftprintf.a`, that mimics the behavior of the original `printf`, handling a specific set of format specifiers. It's a fundamental exercise in C programming that explores variadic functions and modular design.

This library handles the following conversions:

- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints a pointer's memory address in hexadecimal.
- `%d`: Prints a signed decimal integer.
- `%i`: Prints a signed decimal integer.
- `%u`: Prints an unsigned decimal integer.
- `%x`: Prints a number in lowercase hexadecimal.
- `%X`: Prints a number in uppercase hexadecimal.
- `%%`: Prints a literal percent sign.

## Algorithm and Data Structures

My implementation of `ft_printf` revolves around a few key algorithmic choices designed for simplicity, correctness, and extensibility.

### 1. String Parsing and Argument Handling

- **Core Algorithm:** The primary logic involves iterating through the input `format` string character by character in a `while` loop. When a character is not a `%`, it is printed directly. When a `%` is found, the function advances to the next character to determine the format specifier. This linear scan is the most straightforward way I found to parse the format string.

- **Data Structure: `va_list`**: To handle the variable number of arguments, the standard C `<stdarg.h>` library is used. The `va_list` type acts as a pointer to the list of arguments on the stack. The macros `va_start`, `va_arg`, and `va_end` are the required and only standard way to access these arguments sequentially.

### 2. Specifier Dispatch Mechanism

Once a format specifier (like `c`, `s`, or `d`) is identified, a dispatch/handler mechanism is needed to call the correct printing function.

- **Chosen Approach: `if-else if` Chain**: I chose a simple `if-else if` control structure to match the specifier character to its corresponding handler function (e.g., `if (type == 'd') pf_putid(...)`).

- **Justification**: This approach is highly readable, easy to debug, and sufficient for the required number of specifiers. It clearly maps each character to a specific action without unnecessary complexity. I briefly considered a jump table (an array of function pointers) for performance benefits with a very large number of specifiers, however this method would require all functions to have the same signature and would require significant refactoring. In short, `if-else if` structure provided the best balance of simplicity and performance for this project's scope.

### 3. Number Conversion

- **Algorithm: Recursive Division/Modulo**: For numeric conversions (`d`, `i`, `u`, `x`, `X`), a recursive approach is used. The function repeatedly calls itself with the number divided by its base (10 for decimal, 16 for hexadecimal) until the number is less than the base. On the way back up the call stack, the character corresponding to the `number % base` is printed. This is an elegantly simple method to print the digits in the correct order without needing an intermediate buffer to store the string representation.

## Instructions

### Compilation

This project depends on my [`libft` library](https://github.com/mysteryvishal/libft).

1.  **Clone the `libft` repository** into a `libft` folder at the root of this project:
    ```bash
    git clone https://github.com/mysteryvishal/libft.git libft
    ```

2.  **Compile the project** by running `make`:
    ```bash
    make
    ```
    This will create the `libftprintf.a` library file in the root directory.

### Usage

To use the library in your own C project, include the `ft_printf.h` header and compile by linking the `libftprintf.a` file.

```c
// your_program.c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! The answer is %d.\n", "world", 42);
    return (0);
}
```

Compile your program with the following command:
```bash
cc your_program.c libftprintf.a
```

## Resources

This project was completed by referencing standard C documentation and tutorials on variadic functions.

- **`printf` (3)** - [Linux man page](https://man7.org/linux/man-pages/man3/printf.3.html)
- **`stdarg.h`** - [Cplusplus.com reference](https://cplusplus.com/reference/cstdarg/)

AI, specifically GitHub Copilot, was used as a programming assistant for the following tasks:

- **Debugging:** Helping identify learning points, explain concepts simply, and understand error messages.
- **Makefile Assistance:** Identifying logical errors in the `Makefile` to ensure proper dependency handling.

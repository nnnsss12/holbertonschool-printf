# _printf - Custom C printf Implementation

A custom implementation of the C standard library `printf` function, built as part of the Holberton School curriculum. This project replicates core formatting behavior of `printf` using only a limited set of authorized system calls and functions.

---

## Description

`_printf` is a variadic function that formats and prints output to stdout. It processes a format string containing zero or more conversion specifiers and outputs the formatted result, returning the total number of characters printed (excluding the null terminator).

---

## Supported Conversion Specifiers

| Specifier | Description                                             |
| --------- | ------------------------------------------------------- |
| %c        | Prints a single character                               |
| %s        | Prints a string (prints (null) if NULL)                 |
| %d        | Prints a signed decimal integer                         |
| %i        | Prints a signed integer                                 |
| %u        | Prints an unsigned decimal integer                      |
| %o        | Prints an unsigned octal integer                        |
| %x        | Prints an unsigned hexadecimal integer (lowercase)      |
| %X        | Prints an unsigned hexadecimal integer (uppercase)      |
| %b        | Prints an unsigned integer in binary (custom specifier) |
| %%        | Prints a literal % character                            |

> Note: Flag characters, field width, precision, and length modifiers are not supported.

---

## Requirements

* OS: Ubuntu 20.04 LTS
* Compiler: gcc with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
* Coding style: Betty style
* No global variables allowed
* No more than 5 functions per file
* Authorized functions: write, malloc, free, va_start, va_end, va_copy, va_arg

---

## Files

| File         | Description                                |
| ------------ | ------------------------------------------ |
| _printf.c    | Main `_printf` function                    |
| functions.c  | All conversion specifier handler functions |
| _putchar.c   | Writes a single character to stdout        |
| main.h       | Header file with prototypes                |
| man_3_printf | Manual page for `_printf`                  |
| README.md    | Project documentation                      |

---

## Installation

```bash
git clone https://github.com/nnnsss12/holbertonschool-printf.git
cd holbertonschool-printf
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf
```

---

## Usage

```c
#include "main.h"

_printf("Hello, %s! You are %d years old.\n", "Alice", 30);
```

**Prototype:**

```c
int _printf(const char *format, ...);
```

**Return value:**
Returns the number of characters printed. Returns `-1` if an error occurs.

---

## Examples

```c
_printf("Character: [%c]\n", 'Z');
_printf("String: [%s]\n", "Holberton");
_printf("Decimal: [%d]\n", 42);
_printf("Integer: [%i]\n", -7);
_printf("Negative: [%d]\n", -762534);
_printf("Unsigned: [%u]\n", 1024);
_printf("Octal: [%o]\n", 1024);
_printf("Hex lowercase: [%x]\n", 255);
_printf("Hex uppercase: [%X]\n", 255);
_printf("Binary: [%b]\n", 98);
_printf("Percent: [%%]\n");
```

**Expected Output:**

```
Character: [Z]
String: [Holberton]
Decimal: [42]
Integer: [-7]
Negative: [-762534]
Unsigned: [1024]
Octal: [2000]
Hex lowercase: [ff]
Hex uppercase: [FF]
Binary: [1100010]
Percent: [%]
```

---

## Testing

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```

---

## Man Page

```bash
man ./man_3_printf
```

---

## Authors

* Noura - https://github.com/nnnsss12
* Saad - https://github.com/SaadTAr


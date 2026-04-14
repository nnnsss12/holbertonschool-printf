#include "main.h"
#include <unistd.h>

/**
 * print_char - prints a character
 * @c: character to print
 * Return: number of characters printed
 */
int print_char(char c)
{
    return (write(1, &c, 1));
}

/**
 * print_string - prints a string
 * @str: string to print
 * Return: number of characters printed
 */
int print_string(char *str)
{
    int i = 0;

    if (str == NULL)
        str = "(null)";

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }

    return (i);
}

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

/**
 * print_int - prints an integer
 * @n: number
 * Return: number of digits
 */
int print_int(int n)
{
	int count = 0;

	if (n == 0)
		return (_putchar('0'));

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	if (n / 10)
		count += print_int(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}

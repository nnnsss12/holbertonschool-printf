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
 * print_uint - prints an unsigned integer
 * @n: number
 * Return: number of digits
 */
int print_uint(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_uint(n / 10);
	_putchar((n % 10) + '0');
	count++;
	return (count);
}
/**
 * print_int - prints an integer
 * @n: number
 * Return: number of digits
 */
int print_int(int n)
{
	int count = 0;
	unsigned int num;

	if (n == 0)
		return (_putchar('0'));
	if (n < 0)
	{
		_putchar('-');
		num = (unsigned int)(-(n + 1)) + 1;
		count++;
	}
	else
		num = (unsigned int)n;
	if (num / 10)
		count += print_uint(num / 10);
	_putchar((num % 10) + '0');
	count++;
	return (count);
}

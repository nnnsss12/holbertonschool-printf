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
 * print_binary - prints unsigned int in binary
 * @n: number
 * Return: number of digits printed
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n / 2)
		count += print_binary(n / 2);
	_putchar((n % 2) + '0');
	count++;
	return (count);
}
/**
 * print_octal - prints unsigned int in octal
 * @n: number
 * Return: number of digits printed
 */
int print_octal(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += print_octal(n / 8);
	_putchar((n % 8) + '0');
	count++;
	return (count);
}

/**
 * print_hex - prints unsigned int in hexadecimal lowercase
 * @n: number
 * Return: number of digits printed
 */
int print_hex(unsigned int n)
{
	int count = 0;
	char digits[] = "0123456789abcdef";

	if (n / 16)
		count += print_hex(n / 16);
	_putchar(digits[n % 16]);
	count++;
	return (count);
}

/**
 * print_HEX - prints unsigned int in hexadecimal uppercase
 * @n: number
 * Return: number of digits printed
 */
int print_HEX(unsigned int n)
{
	int count = 0;
	char digits[] = "0123456789ABCDEF";

	if (n / 16)
		count += print_HEX(n / 16);
	_putchar(digits[n % 16]);
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

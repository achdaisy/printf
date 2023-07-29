#include <unistd.h>

/**
 * print_character - prints a character to standard output
 * @my_char: input of type char that needs to be outputed.
 *
 * Return: returns 1, otherwise -1
 */

int print_character(char my_char)
{
	return (write(1, &my_char, 1));
}

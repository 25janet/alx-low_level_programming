#include <unistd.h>

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
    char c;

    for (c = '0'; c <= '9'; c++)
    {
        _putchar(c);
    }
    _putchar('\n');
}

int main(void)
{
    print_numbers();
    return (0);
}


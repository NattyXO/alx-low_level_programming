#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */

void print_diagonal(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            _putchar(35);
        }
        _putchar('\n');

    }
    _putchar('\n');
}

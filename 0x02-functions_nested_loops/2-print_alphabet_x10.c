#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
    char ch;
    int i;

    i = 0;

    while (i < 10)
    {
        ch = 'a';
        while (ch <= 'z')
        {
            putchar(ch)
            ch++
        }
        _putchar('\n')
        i++
    }
    
}

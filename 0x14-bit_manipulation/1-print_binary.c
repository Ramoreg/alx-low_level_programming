#include "main.h"

/**
*student: Jimmy Abadi
*school: Alx
*file: 1-print_binary.c
*Project: 0x14. C - Bit manipulation
*/

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
        int i, count = 0;
        unsigned long int current;

        for (i = 63; i >= 0; i--)
        {
                current = n >> i;

                if (current & 1)

                {
                        _putchar('1');
                        count++;
                }

                else if (count)
                        _putchar('0');

        }

        if (!count)
                _putchar('0');

}

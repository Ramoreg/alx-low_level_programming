#include "main.h"

/**
*student: Jimmy Abadi
*school: Alx
*file: 5-flip_bits.c
*Project: 0x14. C - Bit manipulation
*/

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        int i, count = 0;
        unsigned long int current;
        unsigned long int exclusive = n ^ m;

        for (i = 63; i >= 0; i--)
        {

                current = exclusive >> i;
                if (current & 1)
                        count++;
        }

        return (count);
}

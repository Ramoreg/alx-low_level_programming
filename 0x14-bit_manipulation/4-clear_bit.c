#include "main.h"

/**
*student: Jimmy Abadi
*school: Alx
*file: 4-clear_bit.c
*Project: 0x14. C - Bit manipulation
*/

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to remove
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);

        *n = (~(1UL << index) & *n);
        return (1);
}

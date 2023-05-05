#include "main.h"

/**
*student: Jimmy Abadi
*school: Alx
*file: 100-get_endianness.c
*Project: 0x14. C - Bit manipulation
*/

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
        unsigned int i = 1;
        char *c = (char *) &i;

        return (*c);
}

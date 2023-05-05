#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long int
 * @index: index, starting from 0, of the bit you want to clear
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
  {
    /*declare variables*/

    /* checking for validity */
    if (index >= sizeof(unsigned long int ) * 8)
      return (-1);
    /*clearing bit*/
    *n &= ~(1UL << index);

    return(1);
  }

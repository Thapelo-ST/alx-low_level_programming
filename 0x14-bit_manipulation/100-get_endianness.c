#include "main.h"

/**
 *get_endianness - function that checks the endianness.
 *Return: 0 if big endian ,1 if little endian
 */

int get_endianness(void)
  {
    /*declaring variables*/
    unsigned int end = 1;
    char *check = (char *)&end;
    /* getting endianness */
    if (*check)
      return (1);
    else
      return (0);
  }

#include "main.h"

/**
 * get_bit - ...
 * @index: ...
 * Return: ...
 */
int get_bit(unsigned long int n, unsigned int index)
  {
    /*check validity*/
    if (index > 32)
      return (-1);

    /* getting index*/
    return (n >> index & 1);

    /*checking validity and getting index simpler way
    return (index > 32 ? 1 : (n >> index & 1));
    */

    /*reason why its 32 its because most system uses 32 bit system so if
     index is greater than 32 its outside the checking scope resulting
     in an error
     */
  }

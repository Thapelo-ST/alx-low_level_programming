#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
     s1 = s1 == NULL ? "" : s1;
     s2 = s2 == NULL ? "" : s2;

     int len1 = strlen(s1);
     int len2 = strlen(s2);

     char *conc = malloc(len1 + len2 + 1);
     if (conc == NULL)
         return (NULL);

     memcpy(conc, s1, len1);
     memcpy(conc + len1, s2, len2 + 1);

     return (conc);
} 

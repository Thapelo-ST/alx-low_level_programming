#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

char _putchar(char c);
int _strlen(char *s);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *s);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif /* MAIN_H */

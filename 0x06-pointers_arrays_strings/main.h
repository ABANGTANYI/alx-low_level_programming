#ifndef STRCAT_H
#define STRCAT_H

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Description: The function appends the src string to the dest string,
 * overwriting the terminating null byte ('\0') at the end of dest, and then
 * adds a terminating null byte. Returns a pointer to the resulting string  to the resulting string dest.
 */
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif /* STRCAT_H */

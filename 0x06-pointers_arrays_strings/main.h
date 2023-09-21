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
char *_strcat(char *dest, char *src);

#endif /* STRCAT_H */

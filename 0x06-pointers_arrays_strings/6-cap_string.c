#include <ctype.h>

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
    int i = 0;

    /* Capitalize the first letter */
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = toupper(str[i]);

    /* Iterate through the string */
    while (str[i] != '\0')
    {
        /* Check for separators */
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
        {
            /* Capitalize the next letter after the separator */
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
                str[i + 1] = toupper(str[i + 1]);
        }

        i++;
    }

    return (str);
}

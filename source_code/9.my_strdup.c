#include "monty.h"
/**
 * my_strdup-strdup function
 * str:str to be copied
 * Return: char pointer
 */
char *my_strdup(const char *str)
{
    size_t len = strlen(str) + 1;
    char *new_str = malloc(len);
    if (new_str == NULL) {
        return NULL;
    }
    memcpy(new_str, str, len);
    return new_str;
}

#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
    int i, len, temp;  
    len = strlen(str1);
    for (i = 0; i < len/2; i++)  
    {  
         
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }
}

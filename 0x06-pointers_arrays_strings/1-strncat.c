#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: char type paramater
 * @src: char type parameter
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
        int a;
        int b;

        a = 0;
        while (dest[a] != '\0')
        {
                a++;
        }
        b = 0;
        while (b < n && src[b] != '\0')
        {
                dest[a] = src[b];
                a++;
                b++;
        }

        dest[a] = '\0';
        return (dest);
}

#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * overwrites the terminating null byte of the dest string
 * and a terminating null byte
 * @dest - the destination string
 * @src - the source string
 * Return: A pointer to the dest
 */

char *_strcat(char *dest, char *src);
{
	int i, j;
	
	i = 0;

	while(dest[i] != '\0')
	{
		i++;
	}
	for(j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}

#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}

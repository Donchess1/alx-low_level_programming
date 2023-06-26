#include"main.h"
#include<stdio.h>
/**
 *_strlen- check the lenght of strings
 *@s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
return (x);
}

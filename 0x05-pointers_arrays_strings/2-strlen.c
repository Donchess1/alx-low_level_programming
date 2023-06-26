#include"main.h"
#include<stdio.h>
/**
 * main- check the lenght of strings
 *
 * Return 0
*/
int _strlen(char *s)
{
	 int x = 0;
	 while (*s != '\0');
{
	 x++;
	 s++;
}	
 return (x);
}

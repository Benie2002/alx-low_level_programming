#include <stdio.h>
/**
* _puts - Prints a string, followed by a new line, to stdou
* @str: The string to print
* Return: void
*/
int _puts(char *str)
{
int n;
n = 0;
while (str[n] != '\0')
{
putchar(str[n];
n++;
}
putchar('\n');
}

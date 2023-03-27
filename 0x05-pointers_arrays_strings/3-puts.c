#include <stdio.h>
/**
* _puts - Prints a string, followed by a new line, to stdou
* @str: The string to print
* Return: void
*/
int _puts(char *str)
{
while (*str != '\0')
{
putchar(str++);
}
putchar('\n');
}

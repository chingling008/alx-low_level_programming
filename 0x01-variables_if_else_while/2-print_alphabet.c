#include <stdio.h>
/**
 * main - print the letters of the alphabet
 * Description: print the letters of the alphabet
 * Return: Always  (Success)
 */

int main(void)
{
int i = 97;

while (i < 123)
{
	putchar(i);
	i++;
}
putchar(10);
return (0);
}

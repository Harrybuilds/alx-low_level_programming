#include <stdio.h>
/**
 *main - start point of the program
 *Description: a program to print all letters in lowercase and uppercase
 *Return: 0 is return when successful
*/

int main(void)
{

	char small_ch;
	char big_ch;

	for (small_ch = 'a'; small_ch <= 'z' ; small_ch++)
	{
		putchar(small_ch);
	}
	for (big_ch = 'A' ; big_ch <= 'Z' ; big_ch++)
	{
		putchar(big_ch);
	}
	putchar('\n');
	return (0);
}

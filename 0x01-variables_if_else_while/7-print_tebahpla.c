#include<stdio.h>
/**
 * main- programme to display alphabet
 * Return - always retur sucessful
 * 7-print_tebahpla.c
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
return (0);
}

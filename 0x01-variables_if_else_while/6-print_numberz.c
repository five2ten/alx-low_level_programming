#include<stdio.h>
/**
 * main - to print numbers
 * return o (sucessful)
*/
int main(void)
{
	int numbers;
	for (numbers = 0; numbers < 10; numbers++)
		putchar((numbers % 10) + '0');
	printchar('\n');
return (0);
}

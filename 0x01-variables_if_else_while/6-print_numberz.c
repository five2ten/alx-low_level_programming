#include<stdio.h>
/**
 * main - to print numbers
 *this comment aint necessary so annoying
 * return o (sucessful)
*/
int main(void)
{
int numbers;
for (numbers = '0'; numbers <= '9'; numbers++)
{
	putchar(numbers);
}
putchar('\n');
return (0);
}

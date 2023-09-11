#include <stdio.h>
/**
 * main- Entry point
 * Description: print all the numbers of base sixteen
 * Return: 0 (success)
 */
int main(void)
{
char hex_digits[] = "0123456789abcdef";
for (int i = 0; i < 16; i++)
{
	putchar(hex_digits[i]);
}
putchar('\n');
return (0);
}


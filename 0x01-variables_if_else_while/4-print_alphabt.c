#include <stdio.h>
/**
 * main- Entry point
 * Description: program that prints alphabets in lowercase
 * Return : Always 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
	putchar(letter);
}
	letter++;
}
putchar('\n');
return (0);
}


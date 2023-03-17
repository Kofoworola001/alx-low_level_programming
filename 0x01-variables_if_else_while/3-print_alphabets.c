#include <stdio.h>
/**
 * main -Entry point 
 * Description: 'print the alphabets lower and uppercase,followed by a new line '
 * Return:always 0 on success
 */

int main(void)
{

	char i;

	for (i = 'a'; i <= 'Z; i++);
		putchar(i);
	for (i= 'A; i <= 'Z'; i++);
		putchar(i);
	putchar ('\n');
	return (0);
}

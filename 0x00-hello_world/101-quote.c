#include <stdio.h>
#include <unixstd.h>
/**
 * main - A program that prints a line to the std error
 * Return 1 (Success)
 */
int main(void)
{
	fput("and that piece of art is useful\"  Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}

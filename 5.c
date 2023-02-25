#include <unistd.h>
#include <stdio.h>

void putchar(char *c, int i)
{
	while (i >= 0)
	{
	write(1, &c,1);
	--i;
	}
}

void f(char *c)
{
	while(*s)
	{
	if (*c >= 'a' &&  *c <= 'z')
	putchar(*c, *c  - 'a');
	++s;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		f(av[1]);
	write(1, "\n", 2);
	return 0;
}
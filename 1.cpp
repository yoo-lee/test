#include<unistd.h>
#include <iostream>
#include <cstring>
void ft_putchar(int c, int i)
{
	while(i > 0)
	{
	write(1,"ftputchar=", sizeof(strlen("ftputchar")));
	write(1,&c, 1);
	write(1,"\n", 2);
	--i;
	}
}
using namespace std;
void repeat_alpha(char *s)
{
	while(*s)
	{
		if(*s >= 'a' && *s <= 'z')
			{ft_putchar(*s, *s + 1 -'a');
		cout <<"*s="<< *s <<endl;
		cout <<"*s + 1 ="<< *s+1 <<endl;
		cout <<"*s +1 - k ="<< *s+1 -'a' <<endl;}
		else if(*s >= 'A' && *s <= 'Z')
			ft_putchar(*s, *s + 1 -'A');
		else
		write (1,s, 1);
		++s;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
	repeat_alpha(av[1]);

	write(1, "\n", 1);
	return (0);
}
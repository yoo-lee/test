#include <stdio.h>
#include <unistd.h>
#include <iostream>

using namespace std;

void alpha_mirror(char *s)
{
	char *rs;
	*rs = *s + ('z' - 'a');
	cout << *rs << endl;
	write(1, rs, 1);
	write(1, "\n", 1);
	// printf ("%c\n",*s +('a' - 'z'));
}

int main (int ac, char **av)
{
	if (ac == 2)
	alpha_mirror(av[1]);
	else
		return 0;			
}
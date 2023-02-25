#include <stdio.h>
#include <unistd.h>

char rs 'a' + ()
void alpha_mirror(char *s)
{
	if (*s >= 'a' && *s <= 'z')
    {char rs;
    rs = 'a' + ('z' - *s);
    write(1, &rs, 1);
    write(1, "\n", 1);
	}
	else if  (*s >= 'A' && *s <= 'Z')
	{
	char rs;
    rs = 'A' + ('Z' - *s);
    write(1, &rs, 1);
    write(1, "\n", 1);
	}
	else
		return;
}

int main (int ac, char **av)
{
    if (ac == 2) {
        alpha_mirror(av[1]);
        return 0;
    }
    return 1;			
}

#include <unistd.h>

void ft_putchar(char s, int i) 
{
	while(i >0)
	{
  write(1, &s, 1);
  --i;
	}
}

void repeat_alpha(char *s) {
  while(*s) {
    if (*s >= 'a' && *s <= 'z')
      ft_putchar(*s, *s - 'a');
    else if (*s >= 'A' && *s <= 'Z')
      ft_putchar(*s, *s - 'A');
    else
      write(1,s,1);
    ++s;
  }
}

int main (int ac, char **av) {
  if (ac == 2)
    repeat_alpha(av[1]);
	write(1,"\n",2);
  return 0;
}

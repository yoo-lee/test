#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void ft_putnbr(int n)
{
	char c;
	if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(n/ 10);
		ft_putnbr(n% 10);
	}
	
}

int is_prime(int num)
{
	int i = 3;
	
	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num / 2))
	{
		if (num % i == 0)
			return 0;
		i += 2;
	}
			cout <<"num =" << num << endl;
	return 1;
}

int main(int argc, char *argv[])
{
	int sum = 0;
	int nb = atoi(argv[1]);
	
	if (argc == 2)
	{
		while (nb > 0)
			if (is_prime(nb--))
			cout <<"nb ="<< nb << endl;
				sum += (nb + 1);
			cout <<"sum1 =" << nb << endl;
		ft_putnbr(sum);
			cout <<"sum2 =" << nb << endl;
	}
	if (argc != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
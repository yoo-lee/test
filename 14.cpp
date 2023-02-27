#include <unistd.h>
#include <iostream>
using namespace std;
int main (int b, char **a)
{
	int i = 0;
	int f;

	if (b == 2)
	{
	cout << a[1][i] << endl;
	while (a[1][i] == ' ' || a[1][i] == '\t')
		i++;
	while (a[1][i])
	{
	if (a[1][i] == ' ' || a[1][i] == '\t')
		f = 1;	
	if (!(a[1][i] == ' ' || a[1][i] == '\t'))
		{
			if(f)
				write(1, " ", 1);
				f = 0;
				write(1, a[i], 1);			
		}
		i++;
	}
	}
	return(0);
}
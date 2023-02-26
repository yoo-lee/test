
using namespace std;
#include <iostream>

int matoi(const char *s)
{
	int res = 0;
	int sign = 1;

	while(*s == ' ' || *s >= 9 && *s <= 13)
		s++;
	if(*s == '-')
		{
		sign = -1;
		cout << *s <<endl;
		// s++;
		}
	if(*s == '-' ||*s == '+')
		s++;
	while('0' <=*s && '9' >= *s)
	{
		res = res * 10 +*s - '0';
		cout << res <<endl;
		s++;
	}
	return (sign *res);
}

int main ()
{
	int i = matoi(" -++123");	
		cout << i <<endl;
}
#include <iostream>
using namespace std;

int SDPC(int n)
{
	if(n < 0)
	{
		n *= -1;
	}

	if(n <= 1)
	{
		return 0;
	}

	int c = 0;

	if(n % 2 == 0)
	{
		c += 1;
	}

	if(n % 3 == 0)
	{
		c += 1;
	}

	if(n % 5 == 0)
	{
		c += 1;
	}

	if(n % 7 == 0)
	{
		c += 1;
	}
	return c;
}

int main()
{
	return 0;
}

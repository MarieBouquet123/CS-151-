#include <iostream>
#include <string>
using namespace std;

string OddsVEvens(const int data[],int n)
{
	int evens = 0, odds = 0;

	for(int i = 0;i < n;i += 1)
	{
		if(data[i] % 2 == 0)
		{
			evens += data[i];
		}
		else
		{
			odds += data[i];
		}
	}

	if(odds > evens)
	{
		return "Odds";
	}
	else if(odds < evens)
	{
		return "Evens";
	}
	else
	{
		return "Draw";
	}
}

int main()
{
	return 0;
}

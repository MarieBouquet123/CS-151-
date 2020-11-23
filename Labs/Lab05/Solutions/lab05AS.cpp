#include <iostream>
#include <string>
using namespace std;

int FirstSearch(const double data[],double target)
{
	if(data[0] == target)
	{
		return 0;
	}
	else if(data[1] == target)
	{
		return 1;
	}
	else if(data[2] == target)
	{
		return 2;
	}
	else if(data[3] == target)
	{
		return 3;
	}
	else if(data[4] == target)
	{
		return 4;
	}
	else
	{
		return -1;
	}
}

int main()
{
	return 0;
}

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void FirstPrimes(int primes[],int n)
{
	primes[0] = 2;
	int i = 1, c = 3;
	bool prime;

	while(i < n)
	{
		prime = true;

		for(int j = 2;j * j <= c;j += 1)
		{
			if(c % j == 0)
			{
				prime = false;
				break;
			}
		}
		
		if(prime)
		{
			primes[i] = c;
			i += 1;
		}
		c += 1;
	}
		
}

bool TwoSum(const int a[],const int b[],int n,int target)
{
	for(int i = 0;i < n;i += 1)
	{
		for(int j = 0;j < n;j += 1)
		{
			if(a[i] + b[j] == target)
			{
				return true;
			}
		}
	}
	return false;
}

void Print(const int data[],int n)
{
	cout << "[";

	for(int i = 0;i < n;i += 1)
	{
		cout << data[i];

		if(i + 1 < n)
		{
			cout << ",";
		}
	}
	cout << "]";
}

int main()
{
	srand(time(NULL));
	int a[15], b[15];
	int n;
	
	FirstPrimes(a,15);
	Print(a,15);
	cout << "\n";

	for(int i = 0;i < 15;i += 1)
	{
		b[i] = rand() % 99 + 1;
	}

	Print(b,15);
	cout << "\n";

	cout << "\nEnter a number: ";
	cin >> n;

	cout << boolalpha;
	cout << TwoSum(a,b,15,n) << "\n";
	return 0;
}

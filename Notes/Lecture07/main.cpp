/**********************************************************
* Lecture 07: The cycles of iterations can be interrupted.
* Either the iteration can be terminated before its 
* condition evaluate to false, or part of its body can be
* skipped for some instances of the loop. These things can 
* be achived by using a break and continue statement 
* respectively.
**********************************************************/ 
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

//This function calculates the average of the
//users inputs until the user enters a negative
//value
double Average()
{
	double sum = 0.0, value;
	int cnt = 0;

	while(true)
	{
		cout << "Enter a value: ";
		cin >> value;

		if(value >= 0) 
		{
			sum += value;
			cnt += 1;
		}
		else
		{
			//prematurely terminates the loop
			break;
		}
	}
	return ((cnt > 0)?(sum/cnt):(0));
}

//This function displays the numbers of an array
//that are not multiples of three and returns there
//sum
int Non3Sum(const int a[],int n)
{
	int sum = 0;
	for(int i = 0;i < n;i += 1)
	{
		if(a[i] % 3 == 0)
		{
			//skips the remainder of the body
			continue; 
		}
		cout << a[i] << " ";
		sum += a[i];
	}
	cout << "\n";
	return sum;
}

int main()
{
	srand(time(NULL));
	int values[50];
	
	for(int i = 0;i < 50;i += 1)
	{
		values[i] = rand() % 100 + 1;
	}

	cout << Average() << "\n";
	cout << "\n" << Non3Sum(values,50) << "\n";
	return 0;
}

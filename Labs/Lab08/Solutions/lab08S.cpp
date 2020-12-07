#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool GuessNumber(int lo,int hi,unsigned int attempts)
{
	int mx, mn, range, num, guess, i = 0, j;

	if(lo <= hi)
	{
		mn = lo;
		mx = hi;
	}
	else
	{
		mn = hi;
		mx = lo;
	}
	range = (mx - mn) + 1;

	if(range < 20)
	{
		return false;
	}
	num = rand() % range + mn;
	
	if(attempts >= range)
	{
		attempts = range / 2;
	}
	int* guesses = new int[attempts];

	while(i < attempts)
	{
		cout << "\nAttempts: " << (attempts - i) << "\n";
		cout << "Guess a number between " << mn << " and " << mx << ": ";
		cin >> guess;

		if(guess == num)
		{
			cout << "\nCongratulations!\n"; 
			return true;
		}
		else if(guess < mn || guess > mx)
		{
			continue;
		}
		
		for(j = 0;j < i;j += 1)
		{
			if(guesses[j] == guess)
			{
				break;
			}
		}
		
		if(j == i)
		{
			guesses[i] = guess;
			i += 1;
		}
	}
	delete[] guesses;
	cout << "\nBetter Luck Next Time!\n";
	return true;
}

int main()
{	
	srand(time(NULL));
	int a, b;
	unsigned int c;

	cout << "Enter a lower endpoint: ";
	cin >> a;
	cout << "Enter an upper endpoint: ";
	cin >> b;
	cout << "Enter number of attempts: ";
	cin >> c;

	if(!GuessNumber(a,b,c))
	{
		cout << "\nThe range was invalid\n";
	}	
	return 0;
}

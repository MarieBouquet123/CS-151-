#include <iostream>
#include <string>
using namespace std;

void NextLeapYear(int& yr)
{
	if(yr >= 0)
	{
		//gets the years to the next possible leap year
		int n = 4 - yr % 4; 
		yr = yr + n;

		//not all multiples of 4 is a leap year
		if(yr % 100 == 0 && yr % 400 != 0)
		{
			yr += 4;
		}
	}
	else
	{
		yr = 4;
	}
}

string ColorCode(int n)
{
	if(n % 12 == 0)
	{
		return "purple";
	}
	else if(n % 3 == 0)
	{
		return "red";
	}
	else if(n % 4 == 0)
	{
		return "blue";
	}
	else
	{
		return "yellow";
	}
}

void Sort4(double& a,double& b,double& c,double& d)
{
	double t;

	if(a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	
	if(a > c) 
	{
		t = a;
		a = c;
		c = t;
	}

	if(a > d)
	{
		t = a;
		a = d;
		d = t;
	}

	if(b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	
	if(b > d)
	{
		t = b;
		b = d;
		d = t;
	}

	if(c > d)
	{
		t = c;
		c = d;
		d = t;
	}
}

int main()
{
	int year;
	int n;
	double w, x, y, z;
 
	cout << "Enter a year: ";
	cin >> year;

	cout << "The closest leap year to " << year << " that is later than it is ";
	NextLeapYear(year);
	cout << year << "\n\n";

	cout << "Enter an integer: ";
	cin >> n;

	cout << "Your color is " << ColorCode(n) << "\n\n";	

	cout << "Enter a number: ";
	cin >> w;

	cout << "Enter a number: ";
	cin >> x;
	
	cout << "Enter a number: ";
	cin >> y;

	cout << "Enter a number: ";
	cin >> z;

	cout << "Your numbers are (" << w << ',' << x << ',' << y << ',' << z << ")\n";
	Sort4(w,x,y,z);
	cout << "Your numbers sorted are (" << w << ',' << x << ',' << y << ',' << z << ")\n";
 
	return 0;
}

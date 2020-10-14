#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void Echo(string msg)
{
	cout << msg << "\n" << msg << "\n" << msg << "\n";
}

string Name() 
{
	string fname, lname, r;

	cout << "Enter your first name: ";
	cin >> fname;
	cout << "Enter your last name: ";
	cin >> lname;

	r = lname + ',' + fname;
	return r;
}

int Swap(double& a,double& b,double& c,double& d)
{
	double t = a;
	a = b;
	b = c;
	c = d;
	d = t;
}

int main()
{
	string a, b;
	double h, i, j, k;
	
	cout << "Enter a message: ";
	getline(cin,a);
	
	Echo(a);
	cout << "\n";

	b = Name();
	cout << b << "\n";

	cout << "\nEnter a number: ";
	cin >> h;

	cout << "Enter a number: ";
	cin >> i;
	
	cout << "Enter a number: ";
	cin >> j;
	
	cout << "Enter a number: ";
	cin >> k;
	
	cout << "(h,i,j,k) = (" << h << ',' << i << ',' << j << ',' << k << ")\n(h,i,j,k) = (";

	Swap(h,i,j,k);
	
	cout << h << ',' << i << ',' << j << ',' << k << ")\n";

	return 0;
}

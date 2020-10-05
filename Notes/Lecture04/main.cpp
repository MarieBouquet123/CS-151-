#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Function Prototypes
//They are declarations of functions that 
//allows the function to be called before 
//it is defined.

double PI();

int DTS(int,int); //parameter identifiers are optional for prototypes

void Triple(int& t);

void Print(string a,string b);

void Swap(double& a,double&);

//Function Overloading
//When multiple functions have the same 
//name but different parameter lists
string Add(string,string);

int Add(int,int);

int main() 
{
	int a, b, c;
	double x, y;
	string s, t;
	
	//Function Calling
	//They are evaluations of instances of a function
	//They are called by using the name of the function
	//and valid arguments for the given parameters.

	//When the return type is not void, the function call
	//can be used as an argument	
	cout << "PI is " << PI() << "\n\n";

	cout << "Enter an integer: ";
	cin >> a;
	
	cout << "Enter another integer: ";
	cin >> b;

	cout << "Enter one more integer: ";
	cin >> c;

	cout << "\na^2 - b^2 = " << DTS(a,b) << "\n";
	cout << "a + b = " << Add(a,b) << "\n"; //int version
	cout << c << " tripled is ";
	
	//When arguments are passed by reference, the changes in the
	//function are made in the calling function.
	Triple(c); 
	cout << c << "\n\n";

	cout << "Enter a word: ";
	cin >> s;

	cout << "Enter an another word: ";
	cin >> t;

	//The order of the parameter as well as the types of the parameters
	//matter. Arguments correspond to the parameters in same order in the
	//list as them.
	Print(s,t);
	Print(t,s);
	cout << "s + t = " << Add(s,t) << "\n"; //string version
	
	cout << "\nEnter a value for x: ";
	cin >> x;

	cout << "Enter a value for y: ";
	cin >> y;
	
	cout << "(x,y) => (" << x << "," << y << ")\n";

	//An important function
	Swap(x,y);		
	cout << "(x,y) => (" << x << "," << y << ")\n";
	return 0;
}

//Function Definitions
double PI() 
{
	return 3.14159;
}

int DTS(int u,int v)
{
	return u*u - v*v;
}

void Triple(int& p) //prototype and definition parameter identifiers do not have to match
{
	p *= 3;
}

void Print(string a,string b)
{
	cout << a << " " << b << "\n";
}

void Swap(double& a,double& b)
{
	double t = a;
	a = b;
	b = t;
}

int Add(int x,int y)
{
	return x + y;
}

string Add(string x,string y)
{
	return x + y;
}

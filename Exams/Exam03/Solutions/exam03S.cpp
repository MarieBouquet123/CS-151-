#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/********************************************************************
Problem 1
*********************************************************************
a. 
	int M(int a,int b,int c)
	{
		int mx, mn, s = a + b + c;
		if(a < b)
		{
			mn = a;
			mx = b;
		}
		else
		{
			mn = b;
			mx = a;
		}

		if(c > mx)
		{
			mx = c;
		}
		else if(c < mn)
		{
			mn = c;
		}
		return (s - (mx + mn));
	}
b.
	while(true)
	{
		cout << "I Can Do This\n";
	}

c.
	bool T(int& n)
	{
		if(n % 6 == 0)
		{
			n *= 3;
			return true;
		}
		else
		{
			n /= 2;
			return false;
		}
	}

d. 
	for(int i = 98;i >= 7;i -= 7)
	{
		cout << i << "\n";
	}

e.
	double A(double n)
	{
		double m;
		cout << "Enter a number: ";
		cin >> m;
		return (m + n) / 2;
	}
********************************************************************/

/********************************************************************
Problem 2
********************************************************************/
void TimesTable(int n)
{
	if(n > 0 && n <= 833)
	{
		int m;
		cout << setfill('0');

		for(int i = 1;i <= n;i += 1)
		{
			cout << setw(4) << i << " ";
	 		
			for(int j = 1;j <= 12;j += 1)
			{
				m = i * j;
				cout << setw(4) << m << " ";
			}
			cout << "\n";
		}
	}
}

/********************************************************************
Problem 3
*********************************************************************
let L1 := n < 0, L2 := i <= n, L3 := j < i, L4 := i % j == 0

01. n := 4
02. L1 := false
03. t := 1
04. i := 2
05. L2 := true
06. s := 3
07. j := 2
08. L3 := false
09. t := 4
10. i := 3
11. L2 := true
12. s := 4
13. j := 2
14. L3 := true
15. L4 := false
16. j := 3
17. L3 := false
18. t := 8
xx. return := 15
********************************************************************/

/********************************************************************
Problem 4
*********************************************************************
Corrections
03. int c = 0;
07. n = n / b;
10. return c;
13. bool IP(int p)
15. for(int i = 2;i * i < p;i += 1)
22. return true;
25. void PF(int n)
32. if(IP(p) && m % p == 0)
34. int c = CF(m,p);
42. p += 1;
********************************************************************/

int main()
{
	int n;
	
	cout << "Enter an integer: ";
	cin >> n;
	cout << "\n";
	TimesTable(n);
	cout << "\n";
	return 0;
}	

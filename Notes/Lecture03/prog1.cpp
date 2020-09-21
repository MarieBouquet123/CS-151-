#include <iostream>
using namespace std;

int main()
{
	double real, imaginary;

	cout << "Enter real component: ";
	cin >> real;
	cout << "Enter imaginary component: ";
	cin >> imaginary;

	cout << real << " + " << imaginary << "i\n";
	return 0;
}

/*******************************
Trace Table List
-------------------------------
inputs (-6,12)
I = imaginary 
R = real

1. output := out
2. R := -6
3. output := out
4. I := 12
5. output := out
6. return := 0

out
----------------
Enter real component:
Enter imaginary component:
-6 + 12i
********************************/

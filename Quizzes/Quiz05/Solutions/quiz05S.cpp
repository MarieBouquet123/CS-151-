#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

bool Monotonic(int data[])
{
	bool a[4] = {(data[0] < data[1]), (data[1] < data[2]), (data[2] < data[3]), (data[3] < data[4])}; 
	return (a[0] && a[1] && a[2] && a[3]);
}

void Print(const int a[])
{
	cout << "[" << a[0] << "," << a[1] << "," << a[2] << "," << a[3] << "," << a[4] << "]";
}

int main()
{
	srand(time(NULL));
	int arr[5];

	arr[0] = rand() % 100 + 1;
	arr[1] = arr[0] + rand() % 21;
	arr[2] = arr[1] + rand() % 21;
	arr[3] = arr[2] + rand() % 21;
	arr[4] = arr[3] + rand() % 21;

	cout << boolalpha;
	cout << "It is " << Monotonic(arr) << " that ";
	Print(arr);
	cout << " is monotonic\n";

	return 0;
}
		

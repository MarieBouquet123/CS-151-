/**********************************************************************
* Lecture 06: Arrays
* This program will introduce you to arrays. An array is a series of 
* same type objects. In other words, it is multiple variables of the 
* same type all in one variable. It significantly helps when you are 
* dealing with program that requires a lot of data manipulation. Each
* element of an array can be accessed with an index which is an 
* nonnegative integer that is between 0 inclusively and the size of the
* array exclusively i.e (0 <= index < size). Furthermore, arrays can be
* parameters of functions. They are always passed by reference. 
 **********************************************************************/ 

#include <iostream> //using cout, boolalpha
#include <cstdlib> //srand(), rand()
#include <ctime> //time()
#include <string>
using namespace std; 

/*************************************************************************
* For each of the following functions, they will have array parameters.
* They assume that the size of the array parameters are 5. In future
* lectures, we will handle arrays of any size.
**************************************************************************/

void Print(int a[])
{
	cout << '[' << a[0] << ',';
	cout << a[1] << ',';
	cout << a[2] << ',';
	cout << a[3] << ',';
	cout << a[4] << "]\n";
}

void Init(int b[],int lo,int hi)
{
	int mx, mn;
	
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
	
	//Assign random values to the elements
	//in the range [mn,mx] 
	b[0] = rand() % (mx - mn + 1) + mn;
	b[1] = rand() % (mx - mn + 1) + mn;
	b[2] = rand() % (mx - mn + 1) + mn;
	b[3] = rand() % (mx - mn + 1) + mn;
	b[4] = rand() % (mx - mn + 1) + mn;
} 

double Average(int c[])
{
	double sum = c[0] + c[1] + c[2] + c[3] + c[4];
	return sum / 5.0; 
}

int main()
{
	srand(time(NULL)); //seed pseudo-random generator 
	const int a = 10;
	/********************************************************
	* To declare an array you attach the subscript operator
	* ([]) with a size between its symbols to the end of the
	* identifer.
	********************************************************/
	int nm[a], an[5]; //size can be either a const int variable or a int literal

	/********************************************************
	* To initialize an array, you use an initialization list.
	* The list can be used to initilize either all the 
	* elements or some of the elements. However, elements must
	* be initialized in order. No gaps are allowed. When you 
	* initialize an array, the size may be omitted. If it is
	* omitted, the size of the array will be the length of the
	* list.
	**********************************************************/
	int cnt[100] = {1,2,3,4,5,6,7,8,9,10}, ht[] = {0,1,2,3,4,5,6};
	/*********************************************************
	* char arrays are special, They can be initilized using a 
	* string literal. When a char array is initialized with 
	* a string literal a null character is added to the end.
	*********************************************************/ 
	char alpha[27] = {'a','b','c','d'}, alpha2[27] = "abcd";  

	/*********************************************************
	* To access an element of an array you use an index 
	* enclosed by the subscript operator. The index of an 
	* element is equal to 1 less than its position. An 
	* invalid index will cause an error.
	*********************************************************/
	cout << "Addresses of the first three elements of an int array\n";
	cout << "first : " << &nm[0] << "\n";
	cout << "second: " << &nm[1] << "\n";
	cout << "third : " << &nm[2] << "\n";
	cout << "Notice that the following address for each element is\nfour more than the previous element.\n\n";

	/***********************************************************
	* The elements of an array cannot be displayed by using the 
	* array name. It has to done by displaying each individual 
	* element. If you try to display an array, it will display 
	* the address of the first element. The exception are char
	* arrays when they are null terminated.
	*************************************************************/
	cout <<  nm << " is the same as the first address above\n\n";  
	
	cout << "alpha2 = " << alpha2 << "\n\n";

	//An array as an argument of a function call
	Init(nm,1,100); //Only the first five elements will be initialized.
	Print(nm);
	cout << "Average: " << Average(nm) << '\n';

	Init(an,20,40);
	Print(an);
	cout << "Average: " << Average(an) << "\n\n";

	//Assignments
	//The sixth element is assigned 2 times the second element plus
	//3 times the fourth element
	nm[5] = 2 * nm[1] + 3 * nm[3];
	
	//The last element is assigned 6
	nm[9] = 6;

	//The seventh element is assigned 2 less than the last element
	nm[nm[9]] = nm[9] - 2;

	//The eighth element is assigned the sum of the first three elements
	nm[7] = nm[0] + nm[1] + nm[2];

	//The nineth element is assigned the average of the sixth and seventh elements
	nm[8] = (nm[5] + nm[6]) / 2;

	//All the elements displayed
	cout << "nm : [";
	cout << nm[0] << ',' << nm[1] << ',' << nm[2] << ',' << nm[3] << ',' << nm[4] << ',';
	cout << nm[5] << ',' << nm[6] << ',' << nm[7] << ',' << nm[8] << ',' << nm[9] << "]\n";
 	
	return 0;
}
